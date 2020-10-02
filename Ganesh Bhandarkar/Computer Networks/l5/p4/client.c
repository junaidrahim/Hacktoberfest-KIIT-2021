#include<stdio.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <arpa/inet.h>
#include<stdlib.h>
#include <unistd.h>
int main(){


	int fd,res,numbytes,t;
        fd=socket(AF_INET, SOCK_DGRAM, 0);
        int num[5];
                if(fd==-1)
                printf("Socket not created error\n");
        else
                printf("Socket created successfully\n");

        struct sockaddr_in x;
        x.sin_family=AF_INET;
        x.sin_port=ntohs(6000);
        x.sin_addr.s_addr=INADDR_ANY;
        
        res=bind(fd,(struct sockaddr *) &x,sizeof x);
        
        if(res==-1)
                printf("Bind not created error\n");
        else
                printf("Bind created successfully\n");
                
        struct sockaddr_in y;
        y.sin_family=AF_INET;
        y.sin_port=ntohs(6005);
        y.sin_addr.s_addr=INADDR_ANY;
        printf("Enter ele\n");
        int buff[5];
        for(int i=0;i<5;i++)scanf("%d",&buff[i]);
        if(sendto(fd,&buff,20,0,(struct sockaddr *)&y, sizeof y) == -1) 
        {
                perror("sendto");
                exit(1);
        }
        printf("Send Successfully");
        int nu;
        numbytes=recvfrom(fd,&nu, 30, 10,(struct sockaddr*)&x, &t);
        printf("1");
        if((numbytes)== -1) 
        {
                perror("sendto");
                exit(1);
        }
        else
        {
                printf("\n  %d max\"\n",nu);
               
        }
        close(fd);
        
	return 0;
}

