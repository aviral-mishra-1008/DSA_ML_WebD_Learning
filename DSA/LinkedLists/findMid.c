#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    Node* next;
}Node;

Node* findMid(Node *head){
    Node *mid = NULL;
    int count = 0;
    Node *curr = head;
    mid = curr;
    while(curr!=NULL){
        if(count%2==0){
            curr=curr->next;
            count++;
        }
        else{
            mid = mid->next;
            curr = curr->next;
            count++;
        }
    }
    return mid;
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
Node *mid = findMid(head);
printf("\nThe mid element is: \n");
printf("%d",mid->data);
free(head);
free(mid);
return 0;
}