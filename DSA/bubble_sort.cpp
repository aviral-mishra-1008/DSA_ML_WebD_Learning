#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

int main(){
    int arr[6]={1,6,7,6,9,14};
    int n = 6;
    for(int i=0; i<n; i++){
        bool check = false;
        for(int j=0; j+1<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                check = true;
            }
            else{
                continue;
            }
        }
        if(check == false){
            break;
        }
    }
    print(arr,6);
    return 0;
}