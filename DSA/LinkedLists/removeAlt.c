#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    Node* next;
}Node;

void remAlt(Node *head){
    Node *prev = head;
    Node *curr = prev->next;
    while(curr!=NULL){
        prev->next = curr->next;
        free(curr);
        prev = prev->next;
        if(prev==NULL){
            break;
        }
        curr = prev->next;
    }
}

int main(){
int data1,n;
Node *head,*p,*q;

head = (Node*)malloc(sizeof(Node));

p = head;
p->data = 1;
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
remAlt(head);
p=head;

while(p!=NULL){
    printf("%d",p->data);
    printf("->");
    p = p->next;
}
free(head);
return 0;
}