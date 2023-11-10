#include <bits/stdc++.h>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}


void update(int *p){
    p++;
}
int main(){
    /* dude both arr[i] and i[arr] mean the same thing!
    you just need to try to use both


    so, let's say we have an array [_,_,_] so let the address of the first one be the 210 so the arr stores say address of the first element and we call that 210 thus, arr = 210 and when we make a pointer as int *p = &arr[0] thus here what happens is that we had an array with 10 location
    now the difference is that if we check the size occupied by arr and *p
    we will realise that in arr the size will be 4*(n)
    in *p it is always 8 
    */

/*
    int temp[10];
    int *p = &temp[0];
    cout<<"Size of temp is: "<<sizeof(temp)<<" , Size of pointer is: "<<sizeof(p);
    //sizeof(p) gives 8 because p means address of arr which means address is stored in 8bytes
    //siezof(*p) is int so it'll give 4

    cout<<endl<<"Size of *p = "<<sizeof(*p)<<endl;


    //now let's see what differnce & operator brings to the table

    int a[20] = {1,2,3,4};
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;


    int *ptr = &a[0];
    cout<<"Pointer gives: "<<ptr<<endl;
    cout<<"&P = "<< &ptr<<endl; //address of pointer block

    //remember that the symbol table cannot be changed under any circumstances 
    //this means you can define an array say arr and then now if you try to increament the array arr by 1 it means arr++ it will give error 
    //but same isn't true for ptr or pointer!
    // In case of pointers we need to simply do one thing and that is that, we need to increament it by 1 i.e ptr++ and it changes by 4 units why? because int is 4 bytes

    */

    //CHARACTER ARRAYS!
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";


    //now here's a difference in calling

    cout<<"For integer array, the cout gives: "<<arr<<" which is the address of arr"<<endl<<"For char arrays cout gives: "<<ch<<endl;
    //now let's see what needs to be done to find pointer of char array

    char *chp = &ch[0];
    cout<<"So pointer to first element of char array points to: "<<chp<<endl;
    //So even this pointer givesthe entire string

    //so, cout can actually do smth that is called, once it gets a memory addrees it starts printing till it gets null pointer in the string

    //basicaly that's how cout works
    //eg

    char temp = 'i';
    char *ptr = &temp;

    cout<<ptr<<endl;

    //so it prints till it gets the null pointer 
// strange ryt

    //when we assign the char ch[6] = 'abcdef' so firstly in backend, the temp memory is allocated to the program and then the memory is allocated to ch and abcdef is transfered from temp memory to ch
    
    //*********NEVER USE THIS METHOD*******\/
    //char *c = 'abcdef'  \/ here what happens is you can end up editing random memory location and that sucks! it can destroy your system

    //*******FUNCTION*********\/
    int value = 5; 
    int *p = &value;
    

    // so here's how we can pass the pointer to the function
    print(p);
    cout<<"Before updation: "<<p<<endl;
    update(p);
    cout<<"Before updation: "<<p<<endl;

    //here shit gets real


    //now let's realise why value didn't get updated??
    //when we pass a pointer into the function, it creates a copy of it and thus, value of p in update function is increased by 4 bytes but not in global scope p
    //So remember pointer ki value update nahi ho sakti, lekin uss pointer pe placed value ko hum update method se update kr skte
    // thus in a function outside of main(), ptr++ doesn't bring any change into ptr address value but *ptr++ updates value of the element stored at ptr memory location

    //so how to update ptr

    //so remember this method??
    //int func(int arr[], int n){

   // }
   //so here what happens is that into int arr[] the array as in entire 4*(n) sized block of memory is never passed, instead the arr pointer is passed 
   // this means func(int arr[]) == func(int *arr)
   // both give same result

   // thus arr[i]=*(arr+i)

    return 0;
}