#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    for(start,end; start<end; start++, end--){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}


void printArray(int arr[], int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}


int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    printArray(arr,10);
    cout<<endl;
    reverse(arr, 10);
    printArray(arr,10);
    return 0;
}