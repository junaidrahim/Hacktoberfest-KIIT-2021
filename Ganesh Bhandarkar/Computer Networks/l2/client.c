#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>

int main(){

	int fd = socket(AF_INET, SOCK_DGRAM, 0);
	if(fd==-1) printf("SOCKET is not created");
	else printf("SOCKET IS CREATED");
	struct sockaddr_in X;
	X.sin_family = AF_INET;
	X.sin_port = htons(6000);
	X.sin_addr.s_addr = inet_addr("127.0.0.1");
	int res = bind(fd,(struct sockaddr *) &X, sizeof(X));
	if(res==-1) printf("UNSUCCESS");
	else printf("BInd is success"); 
	return 0;
}
