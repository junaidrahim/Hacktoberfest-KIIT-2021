/*
	you must first change the IP address specified in the line:

		serv_addr.sin_addr.s_addr = inet_addr("144.16.202.221");

	to the IP-address of the machine where you are running the server.
*/

#include <arpa/inet.h> 
#include <stdio.h> 
#include <string.h> 
#include <sys/socket.h> 
#include <unistd.h> 
  
struct student {
    int roll;
    float mark1;
    float mark2;
} s[5];

struct result {
    int roll;
    float mark1;
    float mark2;
} res[5];

// Driver code 
int main(int argc, char* argv[]) 
{ 
    int sock; 
    struct sockaddr_in server; 
    int i, temp; 
    
    // Create socket 
    sock = socket(AF_INET, SOCK_STREAM, 0); 
    if (sock == -1) { 
        printf("Could not create socket"); 
    } 
    puts("Socket created"); 
  
    server.sin_addr.s_addr = inet_addr("127.0.0.1"); 
    server.sin_family = AF_INET; 
    server.sin_port = htons(8880); 
  
    // Connect to remote server 
    if (connect(sock, (struct sockaddr*)&server, sizeof(server)) < 0) { 
        perror("connect failed. Error"); 
        return 1; 
    } 
  
    puts("Connected\n"); 

    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("roll %d,\n", s[i].roll);
        printf("marks: ");
        scanf("%f", &s[i].mark1);
        scanf("%f", &s[i].mark2);
    }
   
    if (send(sock, &s, 10 * sizeof(s), 0) < 0) { 
        puts("Send failed"); 
        return 1; 
    } 

    // Receive a reply from the server 
    if (recv(sock, &res, 10 * sizeof(s), 0) < 0) { 
        puts("recv failed"); 
        return 0; 
    } 
  
    puts("Server reply :\n"); 
    for (i = 0; i < 5; ++i) {
        printf("roll %d,\n", res[i].roll);
        printf("swapped marks: ");
        printf("%f\n", res[i].mark1);
        printf("%f\n", res[i].mark2);
    } 
  
    // close the socket 
    close(sock); 
    return 0; 
} 