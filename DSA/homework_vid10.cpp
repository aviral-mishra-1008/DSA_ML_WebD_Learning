#include <iostream>
using namespace std;
void printArray(int arr[], int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

int main(){
    int size = 5;
    int sum = 0;
    int arr_sum[size];
    for(int i=0; i<size; i++){
        cout<<"Enter element "<<i+1<<" : "<<endl;
        cin>>arr_sum[i];
        sum = sum+arr_sum[i];
    }
    cout<<"Input Array is: ";
    printArray(arr_sum, size);
    cout<<endl<<"The sum of all elements is: "<<sum;
    
    return 0;
}