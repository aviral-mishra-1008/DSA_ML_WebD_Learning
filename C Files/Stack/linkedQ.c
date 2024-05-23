#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *front, *next;
}node;

void initialize(int val,node *ptr){
    ptr->data = val;
    ptr->front = ptr;
    ptr->next = 0;
}

node *push(int val, node *q){
    node *new = (node *)malloc(sizeof(node));
    new->next = 0;
    new->data = val;
    q->next = new;
    return new;
}

int pop(node *q){
    if(q->front==0){
        printf("Underflow!");
        return -1;
    }

    int val;

    if(q->front = q){
        val = q->front->data;
        q->front=0;
        printf("Queue ends!");
    }

    else{
        int val = q->front->data;
    }

    node *temp = q->front;
    q->front = q->front->next;
    free(temp);

    return val;
}

void display(node *q){
    if(q==0){
        printf("Empty");
        return;
    }

    node *start = q->front;
    while(start!=0){
        printf("%d",start->data);
        start = start->next;
    }
}

int main(){
    node *rear = (node *)malloc(sizeof(node));
    initialize(1,rear);
    rear = push(4,rear);
    rear = push(5,rear);
    rear = push(6,rear);
    display(rear);
    int val = pop(rear);
    printf("Popped: %d",val);
    display(rear);
    return 0;
}