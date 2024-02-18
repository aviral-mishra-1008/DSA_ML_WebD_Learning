#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    Node* next;
}Node;

int main(){

    int data1;
    Node *head1, *p1, *q1, *head2, *p2, *q2;

    head1 = (Node*)malloc(sizeof(Node));
    head2 = (Node*)malloc(sizeof(Node));

    int n1 = 2;
    int n2 = 1;

    head1->data = 2;
    head2->data = 4;
    head1->next = NULL;
    head2->next = NULL;


    p1 = head1;
    p2 = head2;


    for(int i=0;i<n1;i++){
        q1 = (Node*)malloc(sizeof(Node));
        printf("ENTER: ");
        scanf("%d",&data1);

        q1->data = data1;
        q1->next = NULL;

        p1->next = q1;
        p1 = q1; 
    }

    for(int i=0;i<n2;i++){
        q2 = (Node*)malloc(sizeof(Node));
        printf("ENTER: ");
        scanf("%d",&data1);
        q2->data = data1;
        q2->next = NULL;

        p2->next = q2;
        p2 = q2; 
    }


    printf("Both lists prepared, preparing to merge!\n");

    p2 = head2;
    while(p2!=NULL){
        Node *p = (Node*)malloc(sizeof(Node));
        p->data = p2->data;
        p->next = NULL;
        p1->next = p;
        p2 = p2->next;
        p1 = p;
    }

    p1 = head1;
    while(p1!=NULL){
        printf("\t %d",p1->data);
        p1 = p1->next;
    }
    return 0;
}