#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    Node* next;
}Node;




void printFreq(Node *head, int n){
    Node *p = head;
    int arr[1000] = {0};
    while(p!=NULL){
        arr[p->data]++;
        p = p->next;
    }

    p = head;

    while(p!=NULL){
        if(arr[p->data]!=0){
        printf("FREQ(");
        printf("%d",p->data);
        printf(") = ");
        printf("%d",arr[p->data]);
        printf("\n");
        arr[p->data]=0;
        }
        p = p->next;
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
printFreq(head,n);
free(head);
return 0;
}
