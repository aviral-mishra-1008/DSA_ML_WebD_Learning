#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void collatz_sequence(int n) {
    while (n != 1) {
        printf("%d, ", n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    printf("1\n");
}

int main() {
    int start_number;

    // Get the starting number from the user
    printf("Enter the starting number: ");
    if (scanf("%d", &start_number) != 1) {
        fprintf(stderr, "Invalid input\n");
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
        collatz_sequence(start_number);
        exit(EXIT_SUCCESS);
    } else {
        // Parent process
        // Wait for the child process to complete
        wait(NULL);

        // Parent exits
        exit(EXIT_SUCCESS);
    }

    return 0;
}
