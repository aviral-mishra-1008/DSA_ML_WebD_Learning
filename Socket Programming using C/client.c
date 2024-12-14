#include <stdio.h> 
#include <sys/socket.h> 
#include <netinet/in.h>
#include <arpa/inet.h> 

int main(int argc, char *argv[]){

    if(argc<3){
        printf("Input format: ./_name_ PORT IP_ADDRESS");
        exit(1);
    }

    /*
    //So we first we set the socket, this returns a
    file descriptor and using this fd, we write to the file 
    that holds socket, the data is sent using TCP under the hood 
    and in C socket is a file

    Also _syntax_ (system call)
    socket(Domain or Address Family (AF_INET means IPv4), Type (tell its TCP or UDP) : SOCK_STREAM OR SOCK_DATAGRAM, protocol: the layer beneath the transport layer which we are using, always 0 which means IP Layer)
    */

    int cliSocket = socket(AF_INET, SCOK_STREAM,0);

    if(cliSocket<0){
        printf("Error creating socket, see logs");
        exit(1);
    }

    /*
    We then need to create a socket address, kind of like a packed
    port and ip to initiate the connection, its a structure and we 
    have predefined function that can be used, we have following _syntax_

    struct sockaddr_in (this is for IPv4, _in6 is for IPv6) 
    */
    
    struct sockaddr_in address;

    /*
    Now we need to setup the basic properties of the socket address
    like sin_port, sin_ip, sin_family etc and for this we need file netinet/in.h
    */

    //We need to convert the port to the acceptable format, this is done using the htons(port_number), issue here is that the way we interpret these numbers is in big endian but the machine needs it in the little endian architecture
    address.sin_port = htons((int)argv[1]); //this port should be >1000 because till 1000 ports are reserved and this is the port on which server is listening and received from cmd
    address.sin_family = AF_INET; //IPv4 family

    /*
    now to setup the IP Address, we need to process the input received as string
    from the cmd, like see we have ip = 200.20.20.1 so we need to extract numbers and assign 
    it to the address.sin_addr and this is done using the inet_pton function since the s_addr is an unsigned int
    */

    //the syntax is inet_pton(family, ip string, where to place this ie. sin.addr.s_addr)
    inet_pton(AF_INET,argv[2],sin.addr.s_addr);


    /*
    Once we are done with the address construction we go ahead and invoke the connect system call
    this system call actually creates the connection with the server and returns an integer

    _syntax_
    connect(socket file descriptor, address of the address_created, size of the address struct)
    */
    int result = connect(cliSocket,&address,sizeof address);

    if(result<1){
        printf("Server Unrecheable");
    }

    if(result==0){
        printf("Connection Successful");
    }

    //Now we are connected and can use send/rcv system calls to communicate, also these are just like read/write system calls

    //Create a buffer to send information
    char *SEND_BUFFER;
    SEND_BUFFER = "Hi this is Aviral Mishra!!";

    //this sends the data
    // syntax: send(Socket_FD, Buffer, Len of buffer, flag)
    send(cliSocket,SEND_BUFFER,strlen(SEND_BUFFER),0);

    //To receive
    
    //create buffer
    char RCV_BUFFER[1024];

    //Same syntax as send
    recv(cliSocket,RCV_BUFFER,1024,0);
    printf("Response received: %s\n",RCV_BUFFER)

}