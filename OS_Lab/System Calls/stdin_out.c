#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    char buffer[16];
    ssize_t byteReader = read(STDIN_FILENO, buffer, 15);  //So here the ssize_t is the datatype that stores the integer returned by read system call, STDIN_FILENO means that we need input from keys i.e standard input which acts as file descriptor here, then buffer is the location where we store the std input and thus its a char array and lastly we specify the bytecount of 15 which means we input 15 bytes i.e characters and store them in array index 0-14 then bytereader basically takes following values: >0 when it works perfectly and its value = bytes read, it is 0 when it reaches EOFError in the file and -1 when some other error has occured! 
    if(byteReader==-1){
        perror("INPUT ERROR OCCURED");
        return 1;
    }
    buffer[byteReader] = '\0';
//Adding the null terminator into the end of the file to make it the C String 
    ssize_t writer = write(STDOUT_FILENO, buffer, byteReader);
    if(writer == -1){
        perror("OUTPUT STREAM ERROR");
        return 1;
    }


return 0;
}
