#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    // Open a file for writing
    int fd = open("example.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd == -1) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Fork the process
    pid_t pid = fork();

    if (pid == -1) {
        // Error handling if fork fails
        perror("Fork failed");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // Child process
        const char* childMessage = "Child process writing to file.\n";
        write(fd, childMessage, strlen(childMessage));
        close(fd);
        exit(EXIT_SUCCESS);
    } else {
        // Parent process
        const char* parentMessage = "Parent process writing to file.\n";
        write(fd, parentMessage, strlen(parentMessage));
        close(fd);

        // Wait for the child process to finish
        wait(NULL);
    }

    return 0;
}
