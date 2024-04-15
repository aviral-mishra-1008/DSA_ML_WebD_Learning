#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MAX_FIBONACCI 100

// Global array to store Fibonacci sequence
long long fibonacci[MAX_FIBONACCI];

// Function to compute Fibonacci numbers
void* computeFibonacci(void* arg) {
    int n = *(int*)arg;

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i <= n; ++i) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    pthread_exit(NULL);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number_of_fibonacci_numbers>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    if (n <= 0 || n >= MAX_FIBONACCI) {
        printf("Invalid input. Please provide a positive integer less than %d.\n", MAX_FIBONACCI);
        return 1;
    }

    pthread_t fibonacciThread;
    pthread_create(&fibonacciThread, NULL, computeFibonacci, &n);
    pthread_join(fibonacciThread, NULL);

    printf("Generated Fibonacci sequence:\n");
    for (int i = 0; i <= n; ++i) {
        printf("Fib(%d) = %lld\n", i, fibonacci[i]);
    }

    return 0;
}
