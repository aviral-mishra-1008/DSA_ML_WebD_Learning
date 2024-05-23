#include <stdio.h>
#include <stdlib.h>
#define MAX_DEF 1024

typedef struct Stack{
    int top;
    int stack[MAX_DEF];
}Stack;

void initialize(Stack *stck){
    stck->top = -1;
}

void push(Stack *stck, int val){
    if(stck->top==MAX_DEF-1){
        printf("Stack Overflow!");
        return;
    }    
    stck->stack[++stck->top] = val;
    printf("Success!!");
}

int pop(Stack *stck){
    if(stck->top<0){
        printf("Stack Underflow!");
        return -1;
    }
    
    int val = stck->stack[stck->top];
    stck->top--;
    printf("Success!!");
    return val;
}

void display(Stack *stck){
    if(stck->top<0){
        printf("Stack is empty!!\n");
        return;
    }

    for(int i=0;i<=stck->top; i++){
        printf("%d,",stck->stack[i]);
    }
}

void peek(Stack *stck){
    if(stck->top<0){
        printf("Empty Stack\n");
        return;
    }

    printf("Top element is: %d",stck->stack[stck->top]);
}

int main(){
    Stack *stck = (Stack *)malloc(sizeof(Stack));
    initialize(stck);
    while(1){
        int n,x;
        printf("Enter value: ");
        scanf("%d",&n);
        push(stck,n);
        printf("Press 1 to enter more values: ");
        scanf("%d",&x);

        if(x!=1){
            break;
        }
    }

    display(stck);
    int val = pop(stck);
    display(stck);
    printf("\n\nPopped value is: %d",val);
    return 0;
}