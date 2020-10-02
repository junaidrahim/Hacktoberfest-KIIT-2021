
#include<stdio.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <arpa/inet.h>
#include<stdlib.h>
#include <unistd.h>
int main()
{
        int fd1,res1,numbytes,t1;
        int num;
        fd1=socket(AF_INET,SOCK_DGRAM, 0);

        if(fd1==-1)
                printf("Socket not created error\n");
        else
                printf("Socket created successfully\n");

        struct sockaddr_in x1,x2;
        x1.sin_family=AF_INET;
        x1.sin_port=ntohs(6005);
        x1.sin_addr.s_addr=INADDR_ANY;

        res1=bind(fd1,(struct sockaddr *) &x1,sizeof x1);
        if(res1==-1)
                printf("Bind not created error\n");
        else
                printf("Bind created successfully\n");
        int rev=0;
        numbytes=recvfrom(fd1,&num, sizeof(num), 10,(struct sockaddr*)&x2, &t1);
        printf("1");
        if((numbytes)== -1) 
        {
                perror("sendto");
                exit(1);
        }
        else
        {
        	while(num>0){
        		rev = rev*10 + num%10;
        		num/=10;
        	}
                //printf("\n %d reverse \"\n",rev);
                if(sendto(fd1,&rev,10,10,(struct sockaddr *)&x2, sizeof x2) == -1){
                	perror("sendto");
                	exit(1);
        	}
        }
        close(fd1);        
}

