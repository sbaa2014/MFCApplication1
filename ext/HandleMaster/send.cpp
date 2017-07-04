#include <stdio.h>
#include <winsock2.h>
#pragma comment(lib, "wsock32.lib")



//#define ERR_PRINT(fmt,...)

int my_send(void)
{

	typedef int   int32;
	typedef short int16;
	typedef char  int8;

	typedef unsigned int   uint32;
	typedef unsigned short uint16;
	typedef unsigned char  uint8;

	typedef  unsigned char boolean;

	SOCKET listen_socket;     /* socket of waiting receiving data */

							  /* binded address */
	static struct sockaddr_in srv;

	/* destination address of sending(send CLIENTS_NUM ports at one time) */
	static struct sockaddr_in dest;

	/* port to listen on */
	uint16 listening_port;
	char snd_buf[1024];
	int num;
	WSADATA  Ws;
	//Init Windows Socket
	//必须有这个WSAStartup函数，不然socket不成功
	if (WSAStartup(MAKEWORD(2, 2), &Ws) != 0)
	{
		printf("Init Windows Socket Failed::%d", GetLastError());
		return -1;
	}

	listen_socket = socket(PF_INET, SOCK_DGRAM, 0);

	if (listen_socket == INVALID_SOCKET)
	{
		printf("Error: create socket failed %d/n", listen_socket);
		return FALSE;
	}

	srv.sin_family = AF_INET;
	//srv.sin_addr.s_addr = htonl( INADDR_ANY );  /* ANY Address 本机*/
	srv.sin_addr.s_addr = inet_addr("127.0.0.1");//虚拟机的IP
	srv.sin_port = htons(6000);
	//这里不需要绑定，不然绑定不成功，返回错误码10049
	/*  if (bind( listen_socket, (struct sockaddr *)&srv, sizeof(srv)) != 0)
	{
	printf("Error: bind failed. Error code: %d/n", GetLastError());
	closesocket( listen_socket );
	return FALSE;
	}
	*/
	memset(snd_buf, 0, sizeof(snd_buf));
	sprintf(snd_buf, "aaaaaaaaaaaaaaamessage from client/n");
	printf("send buf %s/n", snd_buf);
	num = sendto(listen_socket, snd_buf, sizeof(snd_buf), 0, (struct sockaddr*)&srv, sizeof(struct sockaddr));
	if (num == SOCKET_ERROR) {
		printf("Send Info Error %d", GetLastError());
	}
	printf("send %d characters/n", num);
	closesocket(listen_socket);

	return 0;
}
