#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MATRIX_SIZE 40

// Structure to hold matrix data
typedef struct {
    int rows;
    int cols;
    int matrix[MATRIX_SIZE][MATRIX_SIZE];
} Matrix;

// Global matrices A and B
Matrix A, B;

// Global matrices for summation and difference results
Matrix sumResult, diffResult;

// Function to fill a matrix with random binary values (0 or 1)
void fillMatrix(Matrix* mat) {
    for (int i = 0; i < mat->rows; ++i) {
        for (int j = 0; j < mat->cols; ++j) {
            mat->matrix[i][j] = rand() % 2;
        }
    }
}

// Function to compute matrix summation
void* computeSum(void* arg) {
    for (int i = 0; i < A.rows; ++i) {
        for (int j = 0; j < A.cols; ++j) {
            sumResult.matrix[i][j] = A.matrix[i][j] + B.matrix[i][j];
        }
    }
    pthread_exit(NULL);
}

// Function to compute matrix difference
void* computeDiff(void* arg) {
    for (int i = 0; i < A.rows; ++i) {
        for (int j = 0; j < A.cols; ++j) {
            diffResult.matrix[i][j] = A.matrix[i][j] - B.matrix[i][j];
        }
    }
    pthread_exit(NULL);
}

// Function to compute matrix multiplication
void computeMultiplication() {
    // Assuming square matrices for simplicity
    for (int i = 0; i < A.rows; ++i) {
        for (int j = 0; j < A.cols; ++j) {
            int product = 0;
            for (int k = 0; k < A.cols; ++k) {
                product += sumResult.matrix[i][k] * diffResult.matrix[k][j];
            }
            printf("%d ", product);
        }
        printf("\n");
    }
}

int main() {
    // Initialize matrices A and B
    A.rows = B.rows = A.cols = B.cols = MATRIX_SIZE;
    fillMatrix(&A);
    fillMatrix(&B);

    // Create threads for summation and difference
    pthread_t sumThread, diffThread;
    pthread_create(&sumThread, NULL, computeSum, NULL);
    pthread_create(&diffThread, NULL, computeDiff, NULL);

    // Wait for threads to complete
    pthread_join(sumThread, NULL);
    pthread_join(diffThread, NULL);

    // Compute matrix multiplication
    computeMultiplication();

    return 0;
}
