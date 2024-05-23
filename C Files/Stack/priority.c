#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int que[MAX];
int front = -1, rear = -1;


void maintain(int i){
    int l = 2*i+1;
    int r = 2*i+2;
    int smallest = i;

    if(l<MAX && que[l]<que[i]){
        smallest = l;
    }

    if(r<MAX && que[r]<que[smallest]){
        smallest = r;
    }

    if(smallest!=i){
        int temp = que[i];
        que[i] = que[smallest];
        que[smallest] = temp;
        maintain(smallest);
    }
}

void enque(int val){

    if(rear==MAX-1){
        printf("Queue Overflow!");
        return;
    }

    if(front==-1){
        front = 0;
    }

    que[++rear] = val;
    maintain(front);
}

void display(){
    if(front==-1 || rear==-1){
        printf("Queue is empty");
    }

    for(int i=front;i<=rear;i++){
        printf("%d,",que[i]);
    }
}

int deque(){
    if(front==-1){
        printf("Underflow");
        return -1;
    }

    int val = que[front];

    if(front==rear){
        front=rear=-1;
        return val;
    }

    front++;
    maintain(front);

    return val;
}

int main(){
        
    for(int i=0;i<MAX;i++){
        que[i] = 1000;
    }
    enque(4);
    enque(3);
    enque(1);
    enque(6);
    enque(2);
    display();
    deque();
    display();
    return 0;
}