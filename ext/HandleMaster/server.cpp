#include "RemoteMemoryOps.hpp"

using namespace std;

int main_3() {
	// Creating a handle to use for the Proof of Concept
	DWORD targetProcessID(NULL);
	cout << "Target Process ID: ";
	cin >> targetProcessID;
	HANDLE targetProcessHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, targetProcessID);
	if (targetProcessHandle == NULL) {
		cout << "ERROR ]> OpenProcess failed!" << endl;
		system("pause");
		return EXIT_FAILURE;
	}
	cout << "Process handle created." << endl;
	cout << "Handle ID : 0x" << hex << targetProcessHandle << " (" << dec << (int)targetProcessHandle << ")" << endl;
	cout << "######]>--------------------------------" << endl;

	HandleGatewayServer handleGatewayServer;
	handleGatewayServer.Init();

	return EXIT_SUCCESS;
}