#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

int search(int arr[], int size, int key){
    int found = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            found =  1;
        }
    }
    return found;
}
//bruteforce
int reverse(int arr[], int size){
    int arr2[size];
    int j = 0;
    for(int i=size-1; i>=0; i--){
        arr2[j] = arr[i];
        j++;
    }
    printArray(arr2,j);
}


int main(){
    int arr[10] = {4,3,7,-2,44,-2,33,42,1,0};


    //Linear search is all about finding whether an element is present in array or not
    cout<<"Enter the key: "<<endl;
    int key;
    cin>>key;

    bool found = search(arr, 10, key);
    if(found){
        cout<<key<<" is present!";
    }
    else{
        cout<<key<<"is not present!";
    }

    // reverse(arr, 10);
    // printArray(arr,10);
        
    return 0;
}