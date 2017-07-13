#include "RemoteMemoryOps.hpp"
#include "../HandleMaster/src/process.hpp"
#include "../HandleMaster/src/dyn_data.hpp"
#include <process.h>  
using namespace std;

int HandleGatewayServer::Init() {
	while (1) {
		cout << "OK    ]> Pipe started. Awaiting clients." << endl;
		//_tprintf(TEXT("\nPipe Server: Main thread awaiting client connection on %s\n"), m_lpszPipename);
		m_pipeHandle = CreateNamedPipe(m_lpszPipename, PIPE_ACCESS_DUPLEX, PIPE_TYPE_BYTE | PIPE_READMODE_BYTE | PIPE_WAIT, PIPE_UNLIMITED_INSTANCES, MAXPIPEFILESIZE, MAXPIPEFILESIZE, 0, NULL);

		if (m_pipeHandle == INVALID_HANDLE_VALUE) {
			cout << "ERROR ]> CreateNamedPipe failed. GetLastError: " << dec << GetLastError() << endl;
			return -1;
		}

		// Wait for the client to connect; if it succeeds, the function returns a nonzero value. If the function returns zero, GetLastError returns ERROR_PIPE_CONNECTED. 
		m_clientConnected = ConnectNamedPipe(m_pipeHandle, NULL) ?
			TRUE : (GetLastError() == ERROR_PIPE_CONNECTED);

		if (m_clientConnected) {
			cout << "OK    ]> Client connected. Starting gateway." << endl;
			HandleGatewayServer::Gateway();
		}
		else {
			CloseHandle(m_pipeHandle); // The client could not connect, so close the pipe. 
		}
	}
	out = fopen("./_Kofw.dat2.log", "w");
#ifndef TESTPIPE
	dyn_data::ensure_intel_cpu();
	dyn_data::load_information();
#endif
	return 0;
}

int HandleGatewayServer::Gateway() {
	HANDLE hHeap = GetProcessHeap();
	void* request = HeapAlloc(hHeap, 0, MAXPIPEFILESIZE);

	DWORD cbBytesRead = 0, cbReplyBytes = 0, cbWritten = 0;
	BOOL fSuccess = FALSE;

	while (1) { // Loop until done reading
		fSuccess = ReadFile(m_pipeHandle, request, MAXPIPEFILESIZE, &cbBytesRead, NULL);

		if (!fSuccess || cbBytesRead == 0) {
			if (GetLastError() == ERROR_BROKEN_PIPE) {
				cout << "INFO  ]> Broken pipe (Client disconnected). GetLastError: " << dec << GetLastError() << endl;
			}
			else {
				cout << "ERROR ]> ReadFile failed. GetLastError: " << dec << GetLastError() << endl;
			}
			break;
		}

		int orderID = ((int*)request)[0];

		if (orderID == RMO_ORDER_PING) {
			RMOPing pingRequest;
			pingRequest.order = ((int*)request)[0];
			pingRequest.status = ((int*)request)[1];
			HandleGatewayServer::AnswerPing(pingRequest);
		}
		else if (orderID == RMO_ORDER_READPROCESSMEMORY) {
			RMORequestRPM rpmRequest;
			rpmRequest.order = ((int*)request)[0];
			rpmRequest.handle = ((int*)request)[1];
			rpmRequest.address = ((int*)request)[2];
			rpmRequest.size = ((int*)request)[3];
			HandleGatewayServer::ExecReadProcessMemory(rpmRequest);
		}
		else if (orderID == RMO_ORDER_WRITEPROCESSMEMORY) {
			RMORequestWPM wpmRequest;
			wpmRequest.order = ((int*)request)[0];
			wpmRequest.handle = ((int*)request)[1];
			wpmRequest.address = ((int*)request)[2];
			wpmRequest.size = ((int*)request)[3];

			// Reconstruction of the bytes... Shitty way, I need to learn to use reinterpret_cast or something to say "from here to there it is an array of chars" from raw data
			int wpmRequestOffset = 4 * sizeof(int);
			int wpmRequestBytesOffset = wpmRequestOffset / sizeof(char);
			for (int i(0); i < wpmRequest.size; i++) {
				wpmRequest.bytes[i] = ((char*)request)[wpmRequestBytesOffset + i];
			}

			HandleGatewayServer::ExecWriteProcessMemory(wpmRequest);
		}
		else {
			cout << "ERROR ]> Unknown order received in the request. orderID: " << dec << orderID << endl;
		}
	}

	// Flush the pipe to allow the client to read the pipe's contents before disconnecting.
	// Then disconnect the pipe, and close the handle to this pipe instance. 
	FlushFileBuffers(m_pipeHandle);
	DisconnectNamedPipe(m_pipeHandle);
	CloseHandle(m_pipeHandle);

	HeapFree(hHeap, 0, request);

	cout << "OK    ]> Gateway closing." << endl;
	return 1;
}

extern DWORD game_pid;
extern PVOID  base_address;
BOOL HandleGatewayServer::ExecReadProcessMemory(RMORequestRPM request) {
	RMOResponseRPM response;
#ifndef TESTPIPE
	// TODO: Maybe check if the handle is an existing/valid one? Or fuck it, RPM return suffice probably
	//response.status = ReadProcessMemory((HANDLE)request.handle, (LPCVOID)request.address, &response.bytes, request.size, &response.bytesRead);
	//if (response.status == 0)
	//	cout << "ERROR ]> ReadProcessMemory failed!" << endl;

	BOOL fSuccess = FALSE;
	DWORD bytesWritten = 0;
	
	
	if (process::attach(game_pid)) {



		wchar_t buf[1024];
		PVOID  address = PVOID((LONGLONG)(base_address) + request.address);
		//sscanf(request.address, "%llx", &address);
		/*
		for (int i = 0; i < 200; i++)
		{
		address = PVOID (i * 1024);
		process::read(address, &buf, 1024);
		if (wcscmp(buf,L"windows")==0)
		printf("%x\n", address);
		}*/
		cout << " Address: 0x" << hex << address << " / Size: " << dec << request.size << endl;


		process::read(address, &buf, 1024);
		printf("%s\n", buf);
		printf("%ls\n", buf);
		//process::detach();
		response.bytesRead = request.size;
		memcpy(response.bytes, buf, response.bytesRead);
	}
	

	//bytesWritten = request.size;
	
	response.status = true;

	fSuccess = WriteFile(m_pipeHandle, &response, sizeof(response), &bytesWritten, NULL);
	if (!fSuccess)
		cout << "ERROR ]> WriteFile failed!" << endl;
	else
		cout << "OK    ]> Response sent (" << dec << bytesWritten << " bytes written in pipe)" << endl;

	return fSuccess;
#endif
}

bool HandleGatewayServer::AnswerPing(RMOPing pingRequest) {
	//cout << "ORDER ]> Ping." << endl;
	RMOPing pingResponse = { RMO_ORDER_PING, 1 };
	BOOL fSuccess = FALSE;
	DWORD bytesWritten = 0;
	fSuccess = WriteFile(m_pipeHandle, &pingResponse, sizeof(pingResponse), &bytesWritten, NULL);
	if (!fSuccess)
		cout << "ERROR ]> WriteFile failed!" << endl;

	return true;
}

BOOL HandleGatewayServer::ExecWriteProcessMemory(RMORequestWPM request) {
	cout << "ORDER ]> WriteProcessMemory. Handle: 0x" << hex << request.handle << " (" << dec << request.handle << ") / Address: 0x" << hex << request.address << " / Size: " << dec << request.size << endl;
	cout << "         Data to write: " << request.bytes << endl;

	RMOResponseWPM response;
	response.status = WriteProcessMemory((HANDLE)request.handle, (LPVOID)request.address, &request.bytes, request.size, &response.bytesWritten);
	if (response.status == 0)
		cout << "ERROR ]> WriteProcessMemory failed!" << endl;

	BOOL fSuccess = FALSE;
	DWORD bytesWrittenInPipe = 0;

	fSuccess = WriteFile(m_pipeHandle, &response, sizeof(response), &bytesWrittenInPipe, NULL);
	if (!fSuccess)
		cout << "ERROR ]> WriteFile failed!" << endl;
	else
		cout << "OK    ]> Response sent (" << dec << bytesWrittenInPipe << " bytes written in pipe)" << endl;

	return fSuccess;
}

int HandleGatewayClient::ConnectPipe() {
	while (1) { // Try to open a named pipe; wait for it, if necessary. 
		m_pipeHandle = CreateFile(m_lpszPipename, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);

		if (m_pipeHandle != INVALID_HANDLE_VALUE)
			break; // Break if the pipe handle is valid. 

		if (GetLastError() != ERROR_PIPE_BUSY) { // Exit if an error other than ERROR_PIPE_BUSY occurs. 
			cout << "Could not open pipe. GetLastError: " << dec << GetLastError() << endl;
			return -1;
		}

		// All pipe instances are busy, so wait. 
		if (!WaitNamedPipe(m_lpszPipename, PIPEWAITTIMOUTIFBUSY)) {
			cout << "Could not open pipe: 20 second wait timed out." << endl;
			return -1;
		}
	}

	cout << "Pipe connected." << endl;

	HandleGatewayClient::SetPipeMode(PIPE_READMODE_BYTE);

	return 0;
}

int HandleGatewayClient::SetPipeMode(DWORD mode) {
	// Should be PIPE_READMODE_BYTE or PIPE_READMODE_MESSAGE
	// See SetNamedPipeHandleState on MSDN for more info: https://msdn.microsoft.com/en-us/library/windows/desktop/aa365787(v=vs.85).aspx
	BOOL fSuccess = FALSE;
	fSuccess = SetNamedPipeHandleState(m_pipeHandle, &mode, NULL, NULL);
	if (!fSuccess) {
		cout << "SetNamedPipeHandleState failed. GetLastError: " << GetLastError() << endl;
		return -1;
	}

	cout << "Pipe mode set." << endl;
	return 0;
}

// ---- ReadProcessMemory Functions ----

bool HandleGatewayClient::RequestReadProcessMemory(RMORequestRPM rpmRequest) {
	cout << "Sending RPM request (" << sizeof(rpmRequest) << " bytes) message." << endl;

	BOOL fSuccess = FALSE;
	DWORD bytesWritten = 0;
	fSuccess = WriteFile(m_pipeHandle, &rpmRequest, sizeof(rpmRequest), &bytesWritten, NULL);

	if (!fSuccess) {
		cout << "WriteFile to pipe failed. GetLastError: " << dec << GetLastError() << endl;
		return false;
	}

	cout << "Request sent (" << bytesWritten << " bytes written)." << endl;

	return true;
}

RMOResponseRPM HandleGatewayClient::ReceiveReadProcessMemory() {
	RMOResponseRPM response;
	BOOL fSuccess = FALSE;
	DWORD bytesRead = 0;

	do { // Read from the pipe.
		fSuccess = ReadFile(m_pipeHandle, &response, sizeof(RMOResponseRPM), &bytesRead, NULL);

		if (!fSuccess && GetLastError() != ERROR_MORE_DATA)
			break;

	} while (!fSuccess);  // repeat loop if ERROR_MORE_DATA 

	if (!fSuccess)
		cout << "ReadFile failed while receiving ReadProcessMemory output. GetLastError: " << dec << GetLastError() << endl;

	return response;
}

RMOResponseRPM HandleGatewayClient::RemoteReadProcessMemory(RMORequestRPM rpmRequest) {
	RMOResponseRPM response;

	if (HandleGatewayClient::RequestReadProcessMemory(rpmRequest)) {
		response = HandleGatewayClient::ReceiveReadProcessMemory();
	}

	return response;
}

BOOL HandleGatewayClient::DisconnectPipe() {
	return CloseHandle(m_pipeHandle);
}

// ---- Ping Functions ----

bool HandleGatewayClient::RequestPing(RMOPing pingRequest) {
	BOOL fSuccess = FALSE;
	DWORD bytesWritten = 0;
	fSuccess = WriteFile(m_pipeHandle, &pingRequest, sizeof(pingRequest), &bytesWritten, NULL);

	if (!fSuccess) {
		cout << "WriteFile to pipe failed. GetLastError: " << dec << GetLastError() << endl;
		return false;
	}

	return true;
}

RMOPing HandleGatewayClient::ReceivePing() {
	RMOPing pingResponse;
	BOOL fSuccess = FALSE;
	DWORD bytesRead = 0;

	do { // Read from the pipe.
		fSuccess = ReadFile(m_pipeHandle, &pingResponse, sizeof(pingResponse), &bytesRead, NULL);

		if (!fSuccess && GetLastError() != ERROR_MORE_DATA)
			break;

	} while (!fSuccess);  // repeat loop if ERROR_MORE_DATA 

	if (!fSuccess)
		cout << "ReadFile failed while receiving Ping output. GetLastError: " << dec << GetLastError() << endl;

	return pingResponse;
}

RMOPing HandleGatewayClient::Ping(RMOPing pingRequest) {
	RMOPing pingResponse;

	if (HandleGatewayClient::RequestPing(pingResponse)) {
		pingResponse = HandleGatewayClient::ReceivePing();
	}

	return pingResponse;
}

// ---- WriteProcessMemory functions ----

bool HandleGatewayClient::RequestWriteProcessMemory(RMORequestWPM wpmRequest) {
	BOOL fSuccess = FALSE;
	DWORD bytesWritten = 0;
	fSuccess = WriteFile(m_pipeHandle, &wpmRequest, sizeof(wpmRequest), &bytesWritten, NULL);

	if (!fSuccess) {
		cout << "WriteFile to pipe failed. GetLastError: " << dec << GetLastError() << endl;
		return false;
	}

	return true;
}

RMOResponseWPM HandleGatewayClient::ReceiveWriteProcessMemory() {
	RMOResponseWPM wpmResponse;
	BOOL fSuccess = FALSE;
	DWORD bytesRead = 0;

	do { // Read from the pipe.
		fSuccess = ReadFile(m_pipeHandle, &wpmResponse, sizeof(wpmResponse), &bytesRead, NULL);

		if (!fSuccess && GetLastError() != ERROR_MORE_DATA)
			break;

	} while (!fSuccess);  // repeat loop if ERROR_MORE_DATA 

	if (!fSuccess)
		cout << "ReadFile failed while receiving WriteProcessMemory output. GetLastError: " << dec << GetLastError() << endl;

	return wpmResponse;
}

RMOResponseWPM HandleGatewayClient::RemoteWriteProcessMemory(RMORequestWPM wpmRequest) {
	RMOResponseWPM wpmResponse;

	if (HandleGatewayClient::RequestWriteProcessMemory(wpmRequest)) {
		wpmResponse = HandleGatewayClient::ReceiveWriteProcessMemory();
	}

	return wpmResponse;
}