/*
 *  Author: G Ganesh ganesh@ganesh-HP-Pavilion-Laptop-15-cc1xx 1.0 
 *  Date: 04.08.2020 12:11:33 IST
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// Sockets includes
#include<sys/types.h>
#include<sys/sockets.h>
// Inet Includes
#include<netinet/in.h>
int main(){
	srand(time(0));
	
	// receive data from server
	char server_message[256]="YOU have reached server !";
	
	// create socket
	int server_socket;
	server_socket = socket(AF_INET, SOCK_STREAM, 0);
	
	
	// specify the add of socket
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9002)
	// s_addr is inside the struct sin_addr
	server_address.sin_addr.s_addr = INADDR_ANY
	
	
	
	return 0;
}
