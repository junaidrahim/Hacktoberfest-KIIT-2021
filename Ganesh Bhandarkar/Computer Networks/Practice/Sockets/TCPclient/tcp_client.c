/*
 *  Author: G Ganesh ganesh@ganesh-HP-Pavilion-Laptop-15-cc1xx 1.0 
 *  Date: 04.08.2020 10:31:58 IST
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
	// create socket
	int network_socket;
	network_socket = socket(AF_INET, SOCK_STREAM, 0);
	
	// specify the add of socket
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9002)
	// s_addr is inside the struct sin_addr
	server_address.sin_addr.s_addr = INADDR_ANY
	
	// connect fun
	int connection = connect(network_socket, (struct sockaddr_*) &server_address, sizeof(server_address));
	// passes 1 or 0 
	if(connection == -1){
		printf("Error in connection \n\n");
	}
	// receive data from server
	char server_response[256];
	
	recv(network_socket,&server_response, sizeof(server_response),0);
	
	// print data that we get back
	printf("the server sent data: %s \n",server_response);
	close(sock);
	
	
	
	return 0;
}
