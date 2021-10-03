#include <arpa/inet.h> 
#include <stdio.h> 
#include <string.h> 
#include <sys/socket.h> 
#include <unistd.h> 
#include <strings.h>

// Driver code 
int main(int argc, char* argv[]) 
{ 
    int socket_desc, client_sock, c, read_size; 
    struct sockaddr_in server, client; 
    int i; 
    char name[5][100] = {"Ganesh", "ram" , "raju", "laxman" , "ramoji"};
    int roll[5] = {100,200,300,400,500};
    char marks[5][5] = {"100","89","98","30","80"};
    int ans;
    // Create socket 
    socket_desc = socket(AF_INET, SOCK_STREAM, 0); 
    if (socket_desc == -1) { 
        printf("Could not create socket"); 
    } 
    puts("Socket created"); 
  
    // Prepare the sockaddr_in structure 
    server.sin_family = AF_INET; 
    server.sin_addr.s_addr = INADDR_ANY; 
    server.sin_port = htons(8880); 
  
    // Bind the socket 
    if (bind(socket_desc, (struct sockaddr*)&server, sizeof(server)) < 0) { 
  
        // print the error message 
        perror("bind failed. Error"); 
        return 1; 
    } 
    puts("bind done"); 
  
    // lsiten to the socket 
    listen(socket_desc, 3); 
  
    puts("Waiting for incoming connections..."); 
    c = sizeof(struct sockaddr_in); 
  
    // accept connection from an incoming client 
    client_sock = accept(socket_desc, (struct sockaddr*)&client, (socklen_t*)&c); 
  
    if (client_sock < 0) { 
        perror("accept failed"); 
        return 1; 
    } 
  
    puts("Connection accepted"); 


    char * sol[2];
    // Receive a message from client 
    while ((read_size = recv(client_sock, &ans, 10 * sizeof(int), 0)) > 0) { 
        for(int i=0;i<5;i++){
            if(roll[i]==ans){
                sol[0] = name[i];             
                sol[1] = marks[i];
            }
        }
        write(client_sock, &sol, sizeof(sol)); 
    } 
  
    if (read_size == 0) { 
        puts("Client disconnected"); 
    } 
    else if (read_size == -1) { 
        perror("recv failed"); 
    } 
  
    return 0; 
} 
  
