#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    Node* next;
}Node;

void insertAlt(Node *head1, Node *head2){
    Node *p = head1;
    Node *q = head2;
    Node *r = head1->next;

    while(r!=NULL){
        p->next = q;
        p = q->next;
        q->next = r;
        q = p;
        p = r;
        r = r->next;
    }
}


int main(){
int data1,n;
Node *head1,*head2,*p,*q;

head1 = (Node*)malloc(sizeof(Node));
head2 = (Node*)malloc(sizeof(Node));


p=head1;
p->data = 1;
p->next = NULL;

printf("How many nodes are there in LL1?: ");
scanf("%d",&n); //this is syntax for the cin>> functionality

n=n-1;

while(n){
    printf("Enter node value: ");
    scanf("%d",&data1);

    q = (Node*)malloc(sizeof(Node));
    q->data = data1;
    q->next = NULL;

    p->next =  q;
    p = q;
    n--;
}


p = head2;
p->data = 4;
p->next = NULL;

printf("How many nodes are there in LL1?: ");
scanf("%d",&n); //this is syntax for the cin>> functionality

n=n-1;

while(n){
    printf("Enter node value: ");
    scanf("%d",&data1);

    q = (Node*)malloc(sizeof(Node));
    q->data = data1;
    q->next = NULL;

    p->next =  q;
    p = q;
    n--;
}


p=head1;
//printing the linked list
printf("\nFirst Linked List is: \n");
while(p!=NULL){
    printf("%d",p->data);
    printf("->");
    p = p->next;
}printf("\n");

p=head2;
printf("\n\nSecond Linked List is: \n");
while(p!=NULL){
    printf("%d",p->data);
    printf("->");
    p = p->next;
}printf("\n");

insertAlt(head1,head2);

p=head1;
printf("\n\nMerged Linked List Is Linked List is: \n");
while(p!=NULL){
    printf("%d",p->data);
    printf("->");
    p = p->next;
}printf("\n");

free(head1);
free(head2);
return 0;
}
