#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    Node* next;
}Node;

void remRight(Node *head){
    Node *prev=NULL;
    Node *curr =head;
    Node *nxt = NULL;


    nxt = curr->next;

    if(curr==NULL || nxt==NULL){
        free(curr);
        free(nxt);
        free(prev);
        return;
    }

    while(curr!=NULL){
        prev = curr;
        curr = nxt;
        if(prev->data<curr->data){
            prev->next = curr->next;
            nxt = nxt->next;
            free(curr);
            curr = nxt;
        }
    }
    free(curr);
    free(nxt);
    free(prev);
}

int main(){
int data1,n;
Node *head,*p,*q;

head = (Node*)malloc(sizeof(Node));

p = head;
p->data = 2;
p->next = NULL;

printf("How many nodes are there?: ");
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


p = head;

//printing the linked list
while(p!=NULL){
    printf("%d",p->data);
    printf("->");
    p = p->next;
}

printf("After trying...");
remRight(head);
p=head;

while(p!=NULL){
    printf("%d",p->data);
    printf("->");
    p = p->next;
}
free(head);
return 0;
}
