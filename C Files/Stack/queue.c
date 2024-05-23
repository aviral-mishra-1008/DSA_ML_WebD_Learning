#include <stdio.h>
#include <stdlib.h>
#define MAX 1024

typedef struct Queue{
    int front,rear;
    int queue[MAX];
}Queue;

void initialize(Queue *q){
    q->front=-1;
    q->rear=-1;
}

void Enqueue(Queue *q, int val){
    if(q->rear == MAX-1){
        printf("Queue Overflow");
        return;
    }

    if(q->front==-1){
        q->front==0;
    }

    q->queue[++q->rear] = val;
}


int Dequeue(Queue *q){
    if(q->front<0){
        printf("Queue Underflow");
        return -1;
    }

    int val = q->queue[q->front];

    if(q->front==q->rear){
        q->front = q->rear = -1;
        return val;
    }

    q->front++;
    return val;
}

int isEmpty(Queue *q){
    return q->front==-1;
}

void display(Queue *q){
    if(isEmpty(q)){
        printf("Sorry dude!!");
    }

    for(int i=q->front;i<=q->rear;i++){
        printf("%d,",q->queue[i]);
    }
}