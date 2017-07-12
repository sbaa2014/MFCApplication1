#include "..\..\..\ext\HandleMaster\RemoteMemoryOps.hpp"
#include <string>


using namespace std;

int main() {
	HandleGatewayClient gatewayClient;
	gatewayClient.ConnectPipe();

	int orderUser = 0;
	do {
		cout << endl;
		cout << "[###] Choose the order to send:" << endl;
		cout << "[ 0 ] Ping (calculate time of multiple request exchange through the pipe)" << endl;
		cout << "[ 1 ] ReadProcessMemory" << endl;
		cout << "[ 2 ] WriteProcessMemory" << endl;
		cout << "[ 9 ] Quit" << endl;
		cout << endl;
		cout << "Your order: ";
		cin >> dec >> orderUser;
		cout << endl;

		if (orderUser == RMO_ORDER_PING) {
			RMOPing pingRequest, pingResponse;
			int nbrPing = 0, pingDone = 0;
			cout << "How many pings to send: ";
			cin >> dec >> nbrPing;
			clock_t tStart = clock();
			while (pingDone < nbrPing) {
				pingResponse = gatewayClient.Ping(pingRequest);
				pingDone++;
			}
			double tExec = (double)(clock() - tStart) / CLOCKS_PER_SEC;
			cout << nbrPing << " ping sent and received. Execution time: " << tExec << endl;
			system("pause");
		}

		if (orderUser == RMO_ORDER_READPROCESSMEMORY) {
			RMOResponseRPM rpmResponse;
			RMORequestRPM rpmRequest;
			rpmRequest.order = RMO_ORDER_READPROCESSMEMORY;

			cout << "Use handle (in decimal): ";
			cin >> dec >> rpmRequest.handle;
			cout << "Memory address to read (in hexadecimal): ";
			cin >> hex >> rpmRequest.address;
			cout << "Size to read (bytes, in decimal): ";
			cin >> dec >> rpmRequest.size;

			rpmResponse = gatewayClient.RemoteReadProcessMemory(rpmRequest);

			cout << endl;
			cout << "Status: " << rpmResponse.status << endl;
			cout << "Bytes Read: " << rpmResponse.bytesRead << endl;
			cout << endl;

			cout << "Raw data (as chars): " << endl;
			for (int i(0); i < 10; ++i) {
				cout << ((char *)rpmResponse.bytes)[i];
			}
			cout << endl << endl;

			system("pause");
		}

		if (orderUser == RMO_ORDER_WRITEPROCESSMEMORY) {
			RMORequestWPM wpmRequest;
			RMOResponseWPM wpmResponse;

			cout << "Use handle (in decimal): ";
			cin >> dec >> wpmRequest.handle;
			cout << "Memory address to write (in hexadecimal): ";
			cin >> hex >> wpmRequest.address;
			cout << "Data to wirte (chars, " << BUFSIZE << " maximum): ";
			cin >> wpmRequest.bytes;

			wpmResponse = gatewayClient.RemoteWriteProcessMemory(wpmRequest);

			cout << endl;
			cout << "Status: " << wpmResponse.status << endl;
			cout << "Bytes written: " << wpmResponse.bytesWritten << endl << endl;

			system("pause");
		}

		system("cls");
	} while (orderUser != 9);

	gatewayClient.DisconnectPipe();

	system("pause");
	return EXIT_SUCCESS;
}