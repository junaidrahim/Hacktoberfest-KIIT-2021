#include<stdio.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <arpa/inet.h>
#include<stdlib.h>
#include <unistd.h>
int main()
{
        int fd1,res1,numbytes,t1;
        char buf[30];
        fd1=socket(AF_INET, SOCK_DGRAM, 0);

        if(fd1==-1)
                printf("Socket not created error\n");
        else
                printf("Socket created successfully\n");

        struct sockaddr_in x1,x2;
        x1.sin_family=AF_INET;
        x1.sin_port=ntohs(6000);
        x1.sin_addr.s_addr=INADDR_ANY;
        res1=bind(fd1,(struct sockaddr *) &x1,sizeof x1);
        if(res1==-1)
                printf("Bind not created error\n");
        else
                printf("Bind created successfully\n");
                
        struct sockaddr_in y;
        y.sin_family=AF_INET;
        y.sin_port=ntohs(6005);
        y.sin_addr.s_addr=INADDR_ANY;        
        
        int cv = 0;
        numbytes=recvfrom(fd1, buf, 30, 0,(struct sockaddr*)&x2, &t1);
        printf("1");
        if((numbytes)== -1) 
        {
                perror("sendto");
                exit(1);
        }
        else
        {	
        	for(int i=0;buf[i]!='\0';i++){
        		if(buf[i]=='a' || buf[i]=='e' || buf[i]=='i' || buf[i]=='o' || buf[i]=='u' ) cv++;
        	}
        	buf[numbytes]='\0';
               printf("\n  %s from client recieved and no of vowels are %d \"\n",buf,cv);
               
        }
        if(sendto(fd1,&cv,30,0,(struct sockaddr *)&y, sizeof y) == -1) 
        {
                perror("sendto");
                exit(1);
        }
        printf("Send Successfully ");
        
        close(fd1);        
}

