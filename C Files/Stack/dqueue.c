#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int deque[MAX];
int front = -1, rear = -1;

void addFront(int val){
    if(rear=MAX-1){
        pritnf("Overflow");
        return;
    }

    if(front==-1){
        front = 0;
    }

    for(int i=rear; i>front; i--){
        deque[i+1] = deque[i];
    }

    deque[front] = val;
    return;
}

int remBack(){
    if(front==-1){
        printf("Underflow");
    }

    int val = deque[rear];

    if(front==rear){
        front = -1;
        rear = -1;
    }

    rear--;

    return val;
}
