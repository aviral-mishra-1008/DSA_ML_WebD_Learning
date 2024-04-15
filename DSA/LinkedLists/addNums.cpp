#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        int val;
        ListNode *next;
    ListNode(){
        this->val = 0;
        next = NULL;
    }

    ListNode(int data){
        this->val = data;
        this->next = nullptr;
    }

    ListNode(int data, ListNode *next){
        this->val = data;
        this->next = next;
    }
};

ListNode* createLL(int headData, vector<int> &arr){
    ListNode* head = new ListNode(headData);
    ListNode *curr = head;
    for(auto i:arr){
        ListNode* node = new ListNode(i);
        curr->next = node;
        curr = node;
    }
    return head;
}

void print(ListNode *head){
    ListNode *temp = head;
    while(temp->next!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<temp->val<<endl;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;
    ListNode *p2l1 = l1;
    ListNode *p2l2 = l2;
    ListNode *newh = new ListNode();
    ListNode *temp = newh;
    int sum = 0;
    while(p2l1!=NULL && p2l2!=NULL){
        sum = p2l1->val + p2l2->val + carry;
        int valu = sum%10;
        carry = sum/10;
        ListNode *newNode = new ListNode(valu);
        temp->next = newNode;
        temp = temp->next;
        p2l1 = p2l1->next;
        p2l2 = p2l2->next;
    }
 
  
    while(p2l1!=NULL){
        sum = p2l1->val + carry;
        int valu = sum%10;
        carry = sum/10;
        ListNode newNode = ListNode(valu);
        temp->next = &newNode;
        temp = temp->next;
        p2l1 = p2l1->next;
    }


    while(p2l2!=NULL){
        sum = p2l2->val + carry;
        int valu = sum%10;
        carry = sum/10;
        ListNode newNode = ListNode(valu);
        temp->next = &newNode;
        temp = temp->next;
        p2l2 = p2l2->next;
    }
    

    if(carry==1){
        ListNode newNode = ListNode(carry);
        temp->next = &newNode;
        temp = temp->next;
    }
    temp->next = NULL;

    return newh->next;
}


int main(){
    vector<int> arr = {4,3};
    ListNode *head1 = createLL(2,arr);
    arr[0] = 6;
    arr[1] = 4;
    ListNode *head2 = createLL(5,arr);
    ListNode *ans = addTwoNumbers(head1,head2);
    print(ans);
    return 0;
}