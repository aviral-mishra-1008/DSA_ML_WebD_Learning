#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    Node* next;
}Node;

Node* revK(Node *head, int k){
    Node *prev = NULL;
    Node *curr = head;
    Node *nxt = NULL;
    int count = 0;

    nxt = curr->next;
    while(count<k && curr!=NULL){
        prev = curr;
        curr = nxt;
        nxt = nxt->next;
        curr->next = prev;
    }

    if(nxt!=NULL){
        head->next = revK(nxt,k);
    }

    else{
        return head;
    }
    return prev;

    
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
int k = 4;
printf("\ngroup reversal\n");
Node* newhead = revK(head,k);
p = newhead;

while(p!=NULL){
    printf("%d",p->data);
    printf("->");
    p = p->next;
}

free(head);
return 0;
}
