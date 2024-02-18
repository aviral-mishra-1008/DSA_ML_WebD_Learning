#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    // Declare and initialize the variable x
    int x = 1000;

    // Display the value of x before fork
    printf("Before fork: x = %d\n", x);

    // Fork the process
    pid_t pid = fork();

    if (pid == -1) {
        // Error handling if fork fails
        perror("Fork failed");
        return 1;
    } else if (pid == 0) {
        // Child process
        x += 50;
        printf("Child process: x = %d\n", x);
    } else {
        // Parent process
        printf("Parent process: x = %d\n", x);
    }
    return 0;
}
