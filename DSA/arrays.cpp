#include <iostream>
using namespace std;


int printArray_pfull(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
}

int main(){
    //declare
    int arr[15];
    // cout<<"Value at 0 index: "<<arr[0]<<endl;
    // cout<<"Value at 0 index: "<<arr[1]<<endl; //garbage value hoti hai if no value given
    // cout<<"Everything is perfect!"<<endl;
    // cout<<"Value at an index jaha array bana nahi hai: "<<arr[20]<<endl; //gives garbage
    
    //second array
    int arr2[5] = {1,2,3};
    // cout<<arr2[0]<<endl;

    // cout<<"Let's Print Array!"<<endl;

    //printing array
    for(int i=0; i<5; i++){
        // cout<<arr2[i]<<endl;
    }  //since entered values are only 3 and size is 5 thus last two always become 0 by their own!
    
    //initialising array using 0
    int arr3[10] ={0};
    // cout<<arr3<<endl;
    arr[9] = 5;   //like this you can assign values at positions!
    cout<<arr[9];
    return 0;
}