#include <bits/stdc++.h>
using namespace std;
int main(){
   /*
    int i = 5;

    int *p = 0; 
    p = &i;

    cout<<p<<endl; //address
    cout<<*p<<endl; //* means dereferencing operator

    //you don't assign *p = smth, *p = &smth and then pointer address is p, if pointer is initially initialised then later you can assign value of &var directly to p
    */

    // int num = 5;
    // int *p = &num;
    // int *q = p;
    // cout<<p<<" - "<<q;
    // return 0;


    //Operations on pointers

    int i = 3;
    int *t = &i;
    // cout<<(*t)++<<endl;

    *t = *t+1; //this means, value at address t should be increased by 1
    cout<<*t<<endl;
    t = t+1; //when we do this we are actually changing the pointer value means we are pointing at something totally different
    //So this means that, since t was initialsed at int so let's say t =100 initially, so if we go t++ it basically changes not to 101 rather it goes to t+sizeof(int)*addition
    //thus it goes to 104
    //agar double se initialise krte to it would've gone to 108

    



}