#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define MAX_ARGS 100

int args[MAX_ARGS];
pthread_t threads[MAX_ARGS]; // Array to store thread IDs
int results[MAX_ARGS]; // Array to store prefix products

void *prefixProduct(void *arg);

int main(){
    int num;
    scanf("%d",&num);
    for(int i=0; i<num;i++){
        int x;
        scanf("%d",&x);
        args[i] = x;
    }

    for(int i=0;i<num;i++){
        int ptr = (int *)malloc(sizeof(int));
        ptr = i;
        pthread_create(threads[i],NULL,prefixProduct,ptr);
    }

    for(int i=0;i<num;i++){
        pthread_join(threads[i],NULL);
    }
}

void *prefixProduct(void *arg){
    int i = *(int *)arg;
    result[i] = 1

    for(int id=0;id<i;id++){
        results[i] = result[i]*args[id];
    }

    pthread_exit(NULL);
}