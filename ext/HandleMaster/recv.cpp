#include <stdio.h>
#include <winsock2.h>
#pragma comment(lib, "wsock32.lib")


typedef int   int32;
typedef short int16;
typedef char  int8;

typedef unsigned int   uint32;
typedef unsigned short uint16;
typedef unsigned char  uint8;

typedef  unsigned char boolean;

SOCKET listen_socket1;     /* socket of waiting receiving data */

SOCKET listen_socket;     /* socket of waiting receiving data */


						  /* binded address */
static struct sockaddr_in srv;

/* destination address of sending(send CLIENTS_NUM ports at one time) */
static struct sockaddr_in clt;

/* port to listen on */
uint16 listening_port;
int32 len;
//#define ERR_PRINT(fmt,...)
extern FILE * out;
extern int my_send(char *srv, char * snd_buf);
extern HANDLE game_handle;
int my_recv(void)
{
	char recv[100];
	char recv_buf[1000];
	int num;
	WSADATA  Ws;

	//Init Windows Socket
	if (WSAStartup(MAKEWORD(2, 2), &Ws) != 0)
	{
		fprintf(out,"Init Windows Socket Failed::", GetLastError());
	
		fflush(out);
		return -1;
	}

	listen_socket1 = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP);

	if (listen_socket1 == INVALID_SOCKET)
	{
		fprintf(out, "Error: create socket failed\n");
		fflush(out);
		return FALSE;
	}

	srv.sin_family = PF_INET;
	//srv.sin_addr.s_addr = inet_addr("127.0.0.1");  /* ANY Address */
	srv.sin_addr.s_addr = htonl(INADDR_ANY);
	srv.sin_port = htons(6000);

	if (bind(listen_socket1, (struct sockaddr *)&srv, sizeof(srv)) != 0)
	{
		fprintf(out, "Error: bind failed. Error code: %d\n", GetLastError());
		fflush(out);
		closesocket(listen_socket1);
		return FALSE;
	}
	while (1)
	{
		len = sizeof(struct sockaddr_in);
		memset(recv, 0, sizeof(recv));
		memset(recv_buf, 0, sizeof(recv_buf));
		//sprintf(recv,"aaaaaaaaaaaaaaamessage from client/n");

		num = recvfrom(listen_socket1, recv_buf, sizeof(recv_buf), 0, (struct sockaddr*)&recv, &len);
		fprintf(out, "receive %s \n", recv_buf);
		fflush(out);
		if (strcmp(recv_buf, "quit!") == 0) break;
		
		LPCVOID lpBaseAddress;
		LPVOID lpBuffer;
		DWORD nSize;
		LPDWORD lpNumberOfBytesRead;
		sscanf(recv_buf, "%llx,%d", &lpBaseAddress,&nSize);
		//read memory
		//send back
		char send_back[1024];
		memset(send_back, 0, sizeof(send_back));
		ReadProcessMemory(game_handle,lpBaseAddress,send_back,nSize,0);

		
		//sprintf_s(send_back, "hahahaha");
		fprintf(out, "receive %d\n", ntohs(((struct sockaddr_in*)&recv)->sin_port));
		fflush(out);
		my_send(recv, send_back);

	}
	closesocket(listen_socket1);

	return 0;
}