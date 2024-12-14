#include <stdio.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>


int main(int argc, char *argv[]){
    
    if(argc<2){
        printf("Input format: ./_name_ PORT");
        exit(1);
    }


    //same as before in client.c, creating socket then creating the address
    int serSock = socket(AF_INET, SOCK_STREAM, 0);
        
    if(serSock<0){
        printf("Error creating socket, see logs");
        exit(1);
    }

    //creating address
    struct sockaddr_in address;
    address.sin_port = htons((int)argv[1]);
    address.sin_family = AF_INET;
    inet_ptons(AF_INET, "127.0.0.1", address.addr.s_addr);


    /*
    Now that we have the server side socket and address defined
    now we use the bind system call to bind identify the socket with the 
    port+ip combination. It obtains the usused port (specified) from OS and marks it using

    _syntax_
    bind(socket_fd, socket_address, totalSize of Socket Address)
    */

   int result = bind(serSock, address, sizeof(address));

   if(result<0){
    printf("Specified Port Already Under Use");
    exit(1);
   }


   /*
   This is the listen system call and then this enables the server 
   to take up  connections 

   _syntax_
   listen(serverSocketFD, total client request it stores before accepting)
   */
   int listenResult = listen(serSock, 10);

   /*
   Accept system call is what provides the access of the client file descriptor on the server side and opposite on the other side
   _syntax_
   accept(serSockFD, address_of_remote_client, pointer to the length of the address)
   */

  //creating the remote client address
  struct sockaddr_in clientAddress;
  int lenClientAddr = sizeof(clientAddress);
  accept(serSock,&clientAddress,&lenClientAddr);


  //receiving data
  char RCV_BUFFER[1024];

  //Same syntax as send
   int bytesRead = recv(cliSocket,RCV_BUFFER,1024,0);
   printf("Response received: %s\n",RCV_BUFFER)


}