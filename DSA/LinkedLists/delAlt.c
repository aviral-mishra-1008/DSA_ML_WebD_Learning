#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    Node* next;
}Node;

void duplidel(Node *head){
    int hashset[1000] = {0};
    Node *p = head;
    Node *prev = NULL;
    while(p!=NULL){
        int data = p->data;
        if(hashset[data]==1){
            Node *nextPtr = p->next;
            prev->next = nextPtr;
            free(p);
            p = nextPtr;
        }
        else{
            hashset[data]=1;
            prev = p;
            p = p->next;
        }
    }
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

duplidel(head);
p=head;
printf("\nAfter processing!\n");
while(p!=NULL){
    printf("%d",p->data);
    printf("->");
    p = p->next;
}
free(head);
return 0;
}
