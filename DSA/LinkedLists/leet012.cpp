#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

Node* createLL(int headData, vector<int> &arr){
    Node* head = new Node(headData);
    Node *curr = head;
    for(auto i:arr){
        Node* node = new Node(i);
        curr->next = node;
        curr = node;
    }
    return head;
}

void print(Node *head){
    Node *temp = head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}


Node* sortList(Node *head){
    Node *find0 = NULL;
    Node *find1 = NULL;
    Node *find2 = NULL;

    vector<Node*> first(3,NULL);

    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        if(temp->data==0){
            if(first[0]==NULL){
                first[0] = temp;
                find0 = temp;
                temp = temp->next;
                continue;
            }
            find0->next = temp;
            find0 = temp;
        }

        if(temp->data==1){
            if(first[1]==NULL){
                first[1]=temp;
                find1 = temp;
                cout<<"fixed1"<<endl;
                temp = temp->next;
                continue;
            }
            find1->next = temp;
            find1 = temp;
        }

        if(temp->data==2){
            if(first[2]==NULL){
                first[2]=temp;
                find2 = temp;
                temp = temp->next;
                continue;
            }
            find2->next = temp;
            find2 = temp;
        }
        temp = temp->next;
    }
    find0->next = first[1];
    find1->next = first[2];
    find2->next = NULL;

    return first[0];
}

int main(){
    vector<int> arr = {0,2,1,0,2,1};
    Node *head  = createLL(1,arr);
    Node *newHead = sortList(head);
    print(newHead);
    return 0;
}