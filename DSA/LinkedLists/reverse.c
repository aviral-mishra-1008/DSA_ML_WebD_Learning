#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    Node* next;
}Node;


void Reverse(Node* head1){
    Node *p1, *q1, *r1;
    p1 = head1;
    q1 = p1;
    p1 = p1->next;
    while(p1!=NULL){
        r1 = p1->next;
        p1->next = q1;
        q1 = p1;
        p1 = r1;
    }
}