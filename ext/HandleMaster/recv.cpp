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

extern int my_send(char *srv, char * snd_buf);
int my_recv(void)
{
	char recv[100];
	char recv_buf[1000];
	int num;
	WSADATA  Ws;

	//Init Windows Socket
	if (WSAStartup(MAKEWORD(2, 2), &Ws) != 0)
	{
		printf("Init Windows Socket Failed::", GetLastError());
		return -1;
	}

	listen_socket1 = socket(PF_INET, SOCK_DGRAM, 0);

	if (listen_socket1 == INVALID_SOCKET)
	{
		printf("Error: create socket failed\n");
		return FALSE;
	}

	srv.sin_family = PF_INET;
	//srv.sin_addr.s_addr = inet_addr("127.0.0.1");;  /* ANY Address */
	srv.sin_addr.s_addr = htonl(INADDR_ANY);
	srv.sin_port = htons(6000);

	if (bind(listen_socket1, (struct sockaddr *)&srv, sizeof(srv)) != 0)
	{
		printf("Error: bind failed. Error code: %d\n", GetLastError());
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
		printf("receive %s \n", recv_buf);
		if (strcmp(recv_buf, "quit!") == 0) break;
		//read memory
		//send back
		char send_back[1024];
		memset(send_back, 0, sizeof(send_back));
		sprintf(send_back, "hahahaha");
		printf("receive %d\n", ntohs(((struct sockaddr_in*)&recv)->sin_port));
		my_send(recv, send_back);

	}
	closesocket(listen_socket1);

	return 0;
}