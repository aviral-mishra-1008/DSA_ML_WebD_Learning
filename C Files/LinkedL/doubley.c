#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int data;
    struct node *next;
    struct node *prev;

}node;

node *insert(node *head, int val){
    node *new = (node *)malloc(sizeof(node));
    new->data = val;
    new->next = 0;
    new->prev = 0;

    if(head==0){
        return new;
    }

    node *temp = head;
    while(temp->next!=0){
        temp = temp->next;
    }

    temp->next = new;
    new->prev = temp;

    return head;
}

void display(node *head){
    if(head==0){
        printf("Empty!");
        return;
    }

    node *temp = head;
    while(temp!=NULL){
        printf("%d,",temp->data);
        temp = temp->next;
    }
}


node* delete(node *ptr,node*head){
    ptr->prev->next = ptr->next;
    node *ret = ptr->prev;
    ptr->next->prev = ptr->prev;
    ptr->next = 0;
    ptr->prev = 0;
    free(ptr);
    return ret;
}

int main(){
    node *head = insert(0,-1);
    head = insert(head,-2);
    head = insert(head,3);
    head = insert(head,-4);
    head = insert(head,5);
    display(head);


    node *dummy = (node *)malloc(sizeof(node));
    dummy->data = 0;
    dummy->next = head;
    head->prev = dummy;
    head = dummy;



    node *temp = head;
    while(temp!=0){
        if(temp->data<0){
            temp = delete(temp,head);
        }
        temp = temp->next;
    }
    printf("\n\nPost deleition\n\n");
    display(head->next);
    return 0;
}