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

Node* reverseBetween(Node* head, int left, int right) {
    Node* temp = head;
    bool checkHead = false;
    int count = 0;
    int checkLeft;
    int checkRight;
        Node* trav = head;
        while(trav!=NULL){
            count++;
            if(count==left){
                checkLeft = trav->data;
            }
            if(count==right){
                checkRight = trav->data;
            }
            trav = trav->next;
        }


    cout<<checkLeft<<','<<checkRight<<endl;
    if(head==NULL or head->next==NULL){
        return head;
    }

    if(head->data==left){
        checkHead = true;
    }
    while(temp->next->data!=checkLeft){
        temp = temp->next;
    }
    Node* link1 = temp;
    temp = temp->next;
    Node* link11 = temp;

    Node* prev = temp;
    temp = temp->next;
    Node* nxt = temp;
    while(prev->data!=checkRight){
        nxt = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nxt;
    }

    if(nxt==NULL){
        link1->next = prev;
        link11->next = NULL;
    }
    else{
        link1->next = prev;
        link11->next = nxt;
    }

    if(checkHead){
        return nxt;
    }
    else{
        return head;
    }

}
int main(){
    vector<int> arr = {5};
    int left = 1;
    int right = 1;
    Node * head = createDLL(3,arr);
    print(head);
    head = reverseBetween(head,left,right);
    print(head);
    return 0;
}