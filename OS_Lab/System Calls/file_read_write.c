//We fetch the required header files
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

//We define a constant buffer_size = 20 this can also be const size_t BUFFER_SIZE = 20
#define BUFFER_SIZE 20

int main(){
    int sourceFile = open("F1.txt", O_RDONLY); //we open the first file in read-only mode
    //if there is any issue then the open option returns us -1
    if (sourceFile == -1) {
        perror("Error opening source file (F1.txt)");
        return 1;
    }
//We open the result file in Write-only mode | Create mode which means: create file if not there | Append means the pointer doesn't overwrite rather picks up where it left then 0644 is the octal "0" term used to specify file read/write permission to owner, group and beyond
    int destinationFile = open("F2.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);

//again returns -1 incase of error
    if (destinationFile == -1) {
        perror("Error opening destination file (F2.txt)");
        close(sourceFile); //always remember to close the file after use
        return 1;
    }


    //initialising the buffer array 

    char buffer[BUFFER_SIZE];
    ssize_t bytesRead = read(sourceFile, buffer, BUFFER_SIZE);

    // reading the data
    if (bytesRead == -1) {
        perror("Error reading from source file");
        close(sourceFile);
        close(destinationFile);
        return 1;
    }


    //writing the data
    ssize_t bytesWritten = write(destinationFile, buffer, bytesRead);

    if (bytesWritten == -1) {
        perror("Error writing to destination file");
        close(sourceFile);
        close(destinationFile);
        return 1;
    }

    close(sourceFile);
    close(destinationFile);

    //return success!
    printf("Content successfully copied from F1.txt to F2.txt.\n");

    return 0;
}