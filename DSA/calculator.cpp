#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    cout<<"Value of a: "<<endl;
    cin>>a;

    cout<<"Value of b: "<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation you wish to perform"<<endl;
    cin>>op;

    switch(op){
        case '*': cout<<a*b;
        break;

        case '+': cout<<a+b;
        break;

        case '-': cout<<a-b;
        break;

        case '/':cout<<a/b;
        break;

        case '^':cout<<pow(a,b);
        break;
    }
    return 0;
}