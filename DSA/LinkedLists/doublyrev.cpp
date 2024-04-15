#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *prev, *next;
    Node(){
        this->data = 0;
        next = NULL;
        prev = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

    Node(int data, Node *next, Node *prev){
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};

Node* createDLL(int headData, vector<int> &arr){
    Node* head = new Node(headData);
    Node *curr = head;
    for(auto i:arr){
        Node* node = new Node(i);
        node->prev = curr;
        curr->next = node;
        curr = node;
    }
    return head;
}

void print(Node*head){
    Node *temp = head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}

Node* revDLL(Node* head){
    if(head==NULL){
        return NULL;
    }

    if(head->next==NULL){
        return head;
    }

    Node* temp = head;
    Node* pichla = NULL;

    while(temp!=NULL){
        pichla = temp->prev;
        temp->prev = temp->next;
        temp->next = pichla;
        temp = temp->prev; 
    }



    return pichla->prev;

}

int main(){
    int data1 = 0;
    vector<int> arr = {1,2,3,4,5,6};
    Node *head = createDLL(data1,arr);
    print(head);
    head = revDLL(head);
    print(head);
    return 0;
}