#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* lchild;
    struct Node* rchild;
} Node;

Node *create(){
    Node *newNode = (Node *)malloc(sizeof(Node));
    int val;
    printf("Enter the value for the node(-1 to denote no child): ");
    scanf("%d",&val);
    if(val==-1){
        return 0;
    }
    newNode->data = val;
    printf("Left Child of %d\n",val);
    newNode->lchild = create();
    printf("Right Child of %d\n",val);
    newNode->rchild = create();

    return newNode;
}

void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    printf("%d,",root->data);
    inOrder(root->lchild);
    inOrder(root->rchild);
}

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    preOrder(root->lchild);
    printf("%d,",root->data);
    preOrder(root->rchild);
}

void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->lchild);
    postOrder(root->rchild);
    printf("%d,",root->data);
}

void main(){
    Node *root;
    root = create();
    printf("\nInorder Traversal\n");
    inOrder(root);

    printf("\nPreOrder Traversal\n");
    preOrder(root);

    printf("\nPostOrder Traversal\n");
    postOrder(root);
}

