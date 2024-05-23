#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
}

int pop(Stack *stck){
    if(stck->top<0){
        printf("Stack Underflow!");
        return -1;
    }
    
    int val = stck->stack[stck->top];
    stck->top--;
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

    printf("%d",stck->stack[stck->top]);
}

int main(){
    char buffer[22];
    char buff2[22];
    int pt = 0;
    fgets(buffer,22,stdin);
    int n=22;
    printf(buffer);
    Stack *top = (Stack *)malloc(sizeof(Stack));
    initialize(top);
    for(int i=0;buffer[i];i++){

        if(buffer[i]==' '){
            continue;
        }

        else if(isdigit(buffer[i])){
            printf("\nInside if top is: \n");
            peek(top);
            int num = 0;
            while(isdigit(buffer[i])){
                num = num*10 + (int)buffer[i]-'0';
                i++;
            }
            i--;
            push(top,num);
        }

        else{
            printf("\nInside else top is: \n");
            peek(top);
            int val1 = pop(top);
            int val2 = pop(top);
            

            switch(buffer[i]){
                case '+':
                    push(top,val2+val1);
                    break;
                
                case '-':
                    push(top,val2-val1);
                    break;
 
                case '*':
                    push(top,val2*val1);
                    break;

                case '/':
                    push(top,val2/val1);
                    break;
            }
        }
    }

    printf("Answer is: ");
    peek(top);

}