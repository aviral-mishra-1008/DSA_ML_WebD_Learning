#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *insert(node *tail, int val){
    node *new = (node *)malloc(sizeof(node));
    new->data = val;
    if(tail==0){
        tail = new;
        new->next = tail;
        return tail;
    }

    new->next = tail->next;
    tail->next = new;
    tail = new;
    printf("Inserted!!\n");
    return tail;
}

void display(node *tail){
    node *temp = tail->next;
    while(temp!=tail){
        printf("%d,",temp->data);
        temp = temp->next;
    }
    printf("%d",tail->data);
}

int main(){
    node *tail = insert(0,4);
    tail = insert(tail,5);
    tail = insert(tail,3);
    tail = insert(tail,2);
    tail = insert(tail,1);
    display(tail);

    
    return 0;
}
