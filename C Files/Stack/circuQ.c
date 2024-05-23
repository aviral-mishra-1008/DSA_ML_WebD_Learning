#include <stdio.h>
#include <stdlib.h>
#define MAX 20

typedef struct cq{
    int front,rear;
    int queue[MAX];
}cq;

void initialize(cq* ptr){
    ptr->front =-1;
    ptr->rear=-1;
}

int isFull(cq *q){
    if((q->front==0 && q->rear==0) || (q->front = q->rear+1)){
        return 1;
    }
    return 0;
}


int isEmpty(cq* q){
    return q->front==-1;
}

void enqueue(cq* q, int val){

    if(isFull(q)){
        printf("Queue Overflow!");
        return;
    }

    int front = q->front;
    int rear = q->rear;

    if(front==-1){
        front = 0;
    }

    if(rear == MAX-1){
        rear = 0;
    }

    else{
        rear = (rear+1)%MAX;
    }

    q->queue[rear] = val;
    return;
}

int dequeue(cq* q){
    if(isEmpty(q)){
        printf("Queue Underflow");
    }

    int front = q->front;
    int rear = q->rear;

    int val = q->queue[front];

    if(front==rear){
        front = rear = -1;
    }

    else if(front==MAX-1){
        front = 0;
    }

    else{
        front = (front+1)%MAX;
    }

    return val;

}