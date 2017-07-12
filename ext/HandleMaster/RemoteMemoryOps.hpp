#pragma once
#include <windows.h> 
#include <stdio.h> 
#include <tchar.h>
#include <strsafe.h>
#include <iostream>
#include <time.h> // Only for benchmark (Ping function)

#define PIPEWAITTIMOUTIFBUSY 20000

#define BUFSIZE 100 // * sizeof(char)
#define MAXPIPEFILESIZE 1024 // Should be the size of the biggest possible request (WPM request, 928 bits)
// At init() I could calculate the sizeof() all the requests and responses struct and use the largest as maxpipefilesize

#define RMO_ORDER_PING 0
#define RMO_ORDER_READPROCESSMEMORY 1
#define RMO_ORDER_WRITEPROCESSMEMORY 2

// ----------------------------------------------------
// Structures required for requests and responses
// ----------------------------------------------------

typedef struct RMORequestRPM RMORequestRPM;
struct RMORequestRPM {
	int order = RMO_ORDER_READPROCESSMEMORY;
	int handle = 0;
	int address = 0;
	int size = BUFSIZE;
};

typedef struct RMOResponseRPM RMOResponseRPM;
struct RMOResponseRPM {
	BOOL status = FALSE;
	SIZE_T bytesRead = 0;
	char bytes[BUFSIZE] = { "" };
};

typedef struct RMOPing RMOPing;
struct RMOPing {
	int order = RMO_ORDER_PING;
	int status = 0;
};

typedef struct RMORequestWPM RMORequestWPM;
struct RMORequestWPM {
	int order = RMO_ORDER_WRITEPROCESSMEMORY;
	int handle = 0;
	int address = 0;
	int size = BUFSIZE;
	char bytes[BUFSIZE] = { "" };
};

typedef struct RMOResponseWPM RMOResponseWPM;
struct RMOResponseWPM {
	BOOL status = FALSE;
	SIZE_T bytesWritten = 0;
};

// ----------------------------------------------------
// Server class (to inject in the process having a handle to the target process)
// ----------------------------------------------------

class HandleGatewayServer {
public:
	int HandleGatewayServer::Init();
	int HandleGatewayServer::Gateway();

	BOOL HandleGatewayServer::ExecReadProcessMemory(RMORequestRPM request);

	BOOL HandleGatewayServer::ExecWriteProcessMemory(RMORequestWPM request);

	bool HandleGatewayServer::AnswerPing(RMOPing pingRequest);

protected:
	BOOL m_clientConnected = FALSE;
	DWORD  m_threadId = 0;
	HANDLE m_pipeHandle = INVALID_HANDLE_VALUE;
	LPTSTR m_lpszPipename = TEXT("\\\\.\\pipe\\alpcport");
};

// ----------------------------------------------------
// Client class (to use in the cheat)
// ----------------------------------------------------

class HandleGatewayClient {
public:
	int HandleGatewayClient::ConnectPipe();
	BOOL HandleGatewayClient::DisconnectPipe();
	int HandleGatewayClient::SetPipeMode(DWORD mode = PIPE_READMODE_BYTE);

	// Functions to ReadProcessMemory remotely
	bool HandleGatewayClient::RequestReadProcessMemory(RMORequestRPM rpmRequest);
	RMOResponseRPM HandleGatewayClient::ReceiveReadProcessMemory();
	RMOResponseRPM HandleGatewayClient::RemoteReadProcessMemory(RMORequestRPM rpmRequest);

	// Functions to Ping
	bool HandleGatewayClient::RequestPing(RMOPing pingRequest);
	RMOPing HandleGatewayClient::ReceivePing();
	RMOPing HandleGatewayClient::Ping(RMOPing pingRequest);

	// Functions to WriteProcessMemory remotely
	bool HandleGatewayClient::RequestWriteProcessMemory(RMORequestWPM wpmRequest);
	RMOResponseWPM HandleGatewayClient::ReceiveWriteProcessMemory();
	RMOResponseWPM HandleGatewayClient::RemoteWriteProcessMemory(RMORequestWPM wpmRequest);

protected:
	HANDLE m_pipeHandle = INVALID_HANDLE_VALUE;
	LPTSTR m_lpszPipename = TEXT("\\\\.\\pipe\\alpcport");
};