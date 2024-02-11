#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 5

int main(){
    int fd = open("test.txt", O_RDONLY);
    if(fd==-1){
        perror("Error loading the file F1!");
        close(fd);
        exit(EXIT_FAILURE);
    }
    char buffer[BUFFER_SIZE+1];


    off_t offsete = lseek(fd,15,SEEK_SET);

    ssize_t reader = read(fd,buffer,BUFFER_SIZE);
    if(reader==-1){
        perror("Error reading F1!");
        close(fd);
        exit(EXIT_FAILURE);
    }

    close(fd);

    int fd2 = open("result.txt", O_WRONLY | O_CREAT | O_TRUNC);
    if(fd2==-1){
        perror("Error opening F2 ");
        close(fd2);
        exit(EXIT_FAILURE);
    }

    ssize_t writer = write(fd,buffer,BUFFER_SIZE);
    if(writer==-1){
        perror("Error writing F2 ");
        close(fd2);
        exit(EXIT_FAILURE);
    }

    close(fd2);
    printf("Success!");
    return 0;
}