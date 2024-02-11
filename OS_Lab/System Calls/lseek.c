#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 5

int main() {
    char file_path[] = "C:\\Users\\DELL\\Desktop\\Programming Essentials Learnt\\OS_Lab\\System Calls\\test.txt";  // Adjust the size according to your needs
    char buffer[BUFFER_SIZE + 1];  // Extra 1 for null terminator

    int file_descriptor = open(file_path, O_RDONLY);
    if (file_descriptor == -1) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    off_t seeker = lseek(file_descriptor,-5,SEEK_END);
    if(seeker==-1){
        perror("Error seeking file");
        close(file_descriptor);
        exit(EXIT_FAILURE);
    }

    ssize_t bytesRead = read(file_descriptor, buffer, BUFFER_SIZE);
    if (bytesRead == -1) {
        perror("Error reading file");
        close(file_descriptor);
        exit(EXIT_FAILURE);
    }

    buffer[BUFFER_SIZE] = '\0';
    close(file_descriptor);

    printf(buffer);
    return 0;
}
