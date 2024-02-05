//We fetch the required header files
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

//We define a constant buffer_size = 20 this can also be const size_t BUFFER_SIZE = 20
#define BUFFER_SIZE 20

int main(){
    int sourceFile = open("F1.txt", O_RDONLY);
    
    if (sourceFile == -1) {
        perror("Error opening source file (F1.txt)");
        return 1;
    }

    int destinationFile = open("F2.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);

    if (destinationFile == -1) {
        perror("Error opening destination file (F2.txt)");
        close(sourceFile);
        return 1;
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytesRead = read(sourceFile, buffer, BUFFER_SIZE);

    if (bytesRead == -1) {
        perror("Error reading from source file");
        close(sourceFile);
        close(destinationFile);
        return 1;
    }

    ssize_t bytesWritten = write(destinationFile, buffer, bytesRead);

    if (bytesWritten == -1) {
        perror("Error writing to destination file");
        close(sourceFile);
        close(destinationFile);
        return 1;
    }

    close(sourceFile);
    close(destinationFile);

    printf("Content successfully copied from F1.txt to F2.txt.\n");

    return 0;
}