#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node *lchild;
    struct node *rchild;
}node;

node *create(int val){ 
    node *root = (node *)malloc(sizeof(node));
    root->val = val;
    root->lchild = 0;
    root->rchild = 0;
    return root;
}

node *insert(int vale,node *root){
    if(root==0){
        return create(vale);
    }

    if(root->val>vale){
        root->lchild = insert(vale,root->lchild);
    }

    else if(root->val==vale){
        perror("Error! Value Already Exists");
        exit(1);
    }

    else{
        root->rchild = insert(vale,root->rchild);
    }

    return root;
}

void inorder(node *root){
    if(root==NULL){
        return;
    }

    inorder(root->lchild);
    printf("%d,",root->val);
    inorder(root->rchild);
}



void preorder(node *root){
    if(root==NULL){
        return;
    }
    printf("%d,",root->val);
    preorder(root->lchild);
    preorder(root->rchild);
}


node *findLastRight(node *root){
    if(root->rchild==0){
        return root;
    }
    root = root->rchild;
}

node *helper(node *root){
    if(root->lchild==0){
        return root->rchild;
    }

    else if(root->rchild==0){
        return root->lchild;
    }

    node *nextR = root->rchild;
    node *extremeRight = findLastRight(root->lchild);
    extremeRight->rchild = nextR;

    return root->lchild;
}


node *delete(int val, node *root){
    if(root==0){
        return root;
    }


    if(root->val==val){
        return helper(root);
    }

    node *temp = root;
    while(root!=0){
        if(root->val>val){
            if(root->lchild!=NULL && root->lchild->val==val){
                root->lchild = helper(root->lchild);
                break;
            }

            else{
                root = root->lchild;
            }
        }

        else{
            if(root->rchild!=NULL && root->rchild->val==val){
                root->rchild = helper(root->rchild);
                break;
            }

            else{
                root = root->rchild;
            }
        }
    }

    return temp;
}


int max(int lh, int rh){

    if(lh>=rh){
        return lh;
    }

    return rh;
}

int findHeight(node *root){
    if(root==0){
        return -1;
    }

    int lh = findHeight(root->lchild);
    int rh = findHeight(root->rchild);

    return 1+max(lh,rh);
}

int main(){
    node *root = create(2);
    insert(1,root);
    insert(4,root);
    insert(0,root);
    insert(7,root);
    printf("\n");
    inorder(root);
    int next = findHeight(root);
    printf("\nheight = %d",next);    
    return 0;
}