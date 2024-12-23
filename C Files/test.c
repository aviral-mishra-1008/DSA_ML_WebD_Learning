#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int data;
    struct node *next;
}node;

int main(){
    int arr[2] = {1,2};
    int arr2[2];
    // arr2 = arr;
    // printf("%s",str1);
    node * head = (node*)malloc(sizeof(node));
    head->data = 4;
    head->next = NULL;

    node *p= head;
    printf("%d",sizeof(p));
    return 0;
}