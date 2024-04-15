#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MAX_ARGS 100

// Global array to store prefix products
long long prefixProducts[MAX_ARGS];

// Structure to hold thread arguments
typedef struct {
    int id;
    int value;
} ThreadArgs;

// Function to compute prefix product
void* computePrefixProduct(void* arg) {
    ThreadArgs* args = (ThreadArgs*)arg;
    int id = args->id;
    int value = args->value;

    long long product = 1;
    for (int i = 1; i <= value; ++i) {
        product *= i;
    }

    prefixProducts[id] = product;
    pthread_exit(NULL);
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: %s <integer1> <integer2> ... <integerN>\n", argv[0]);
        return 1;
    }

    int numArgs = argc - 1;
    pthread_t threads[MAX_ARGS];
    ThreadArgs threadArgs[MAX_ARGS];

    for (int i = 0; i < numArgs; ++i) {
        threadArgs[i].id = i + 1;
        threadArgs[i].value = atoi(argv[i + 1]);
        pthread_create(&threads[i], NULL, computePrefixProduct, &threadArgs[i]);
    }

    for (int i = 0; i < numArgs; ++i) {
        pthread_join(threads[i], NULL);
    }

    for (int i = 0; i < numArgs; ++i) {
        printf("product %d = %lld\n", i + 1, prefixProducts[i]);
    }

    return 0;
}
