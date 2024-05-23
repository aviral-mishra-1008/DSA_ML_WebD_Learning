#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

void initialize(int val,node *ptr){
    ptr->data = val;
    ptr->next = 0;
}

node *push(int val,node *top){
    node *ptr = (node *)malloc(sizeof(node));
    ptr->next = top;
    ptr->data = val;
    top = ptr;
    return top;
}

node *pop(node *top){
    int val = top->data;
    node *temp = top;
    top = top->next;
    printf("\n\nWe popped value : %d\n\n",val);
    free(temp);
    return top;
}

void display(node *top){
    node *temp = top;
    while(temp!=0){
        printf("%d,",temp->data);
        temp = temp->next;
    }
}

int main(){
    node *top = (node *)malloc(sizeof(node));
    initialize(2,top);
    top = push(4,top);
    top = push(5,top);
    top = push(6,top);
    display(top);
    top = pop(top);
    display(top);
}
