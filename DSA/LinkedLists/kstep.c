#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    Node* next;
}Node;


void print(Node *head,int k){
    int count = 0;
    Node *p = head;
    while(p!=NULL){
        if(count%k==0){
            printf("%d",p->data);
            printf("->");
        }
        count++;
        p = p->next;
    }
    printf("NULL");
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

printf("\nEnter step: ");
int k;
scanf("%d",&k);
printf("\n Printing at a step of k: \n");
print(head,k);
freeList(head);
return 0;
}
