#include <stdio.h>
#include <stdlib.h>

//in C we firstly define the Node datatype,  a custom data type, rmember C is not an OOPs supporting language so no concept of class or something,
//we are using typedef so that we don't need to write struct node* everywhere and just writing node works well!

typedef struct Node{
    int data;
    Node* next;
}Node;

Node* Reverse(Node* head1){
    Node *p1=head1, *q1=NULL, *r1=NULL;
    while(p1!=NULL){
        r1 = p1->next;
        p1->next = q1;
        q1 = p1;
        p1 = r1;
    }
    return q1;
}

int main(){
int data1,n;
Node *head,*p,*q; //if we hadn't used typedef then we would've to use the struct Node* and that sounds like shit

//here's how you make a node in C
//we will need to allocate size as well in here!
//new keyword doesn't exist

head = (Node*)malloc(sizeof(Node)); //size of Node ke barabar i.e 8bytes or 12 bytes(in 64bit computer) memory allocate krke uske first byte ka address pradan karo basically yahi mtlb hai, pointer to node deta ye 


//this initialised the first node
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
    printf("\t %d",p->data);
    p = p->next;
}

Node* newhead = Reverse(head);

printf("\nAfter changes:\n");
p = newhead;
//printing the linked list
while(p!=NULL){
    printf("\t %d",p->data);
    p = p->next;
}

return 0;
}
