#include <bits/stdc++.h>
using namespace std;

struct Node{  
/*so basically Node is a self defined dataType which can be used to define a custom data type in C,C++ and Java
Now LinkedList are the ones which store two things, the data of current node and pointer to the next node, thus we require some datatype to implement this shit
Thus we define our own data object, this can be done by two ways: using the Struct in C,C++ an also in using class and instance in C++ and Java
Node* basically means nothing special, just like we have int and all that, we denote the storing of pointers by datatype T* where T is the datatype jiska pointer wo hai
Matlab, int x = 9 so to store the pointer of x we need to write : int* y = &x where int* implies that y stores a pointer and &x basically returns the memory location of x or say the pointer to x*/

    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1; //always use some other name than data/next
        next = next1;
    }
};

int main(){
    //Now there are two ways to initialise a Linked List in C++
    //Using new keyword which retuns the pointer to the memory location in which the head of the LinkedList is initialised
    //Using the normal constructor of the Node datatype

    //new method
    Node* head = new Node(2,nullptr); //this is very important, nullptr means null pointer and we basically need to initially point the head to nothing
    // cout<<"The pointer to head is: "<<head<<end; //this will return a pointer but its an object ryt we cannot print object firectly
    cout<<"The data stored in head: "<<head->data<<endl; //this will print the data stored in head

    //-> basically is an operator

    
    return 0;
}