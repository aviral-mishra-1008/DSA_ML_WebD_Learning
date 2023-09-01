#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
}

int main(){
    int arr[6] = {22,12,34,23,45,6};
    int n  = 6;
    for(int i=0; i<n-1; i++){
        int x = i;
        for(int j=i+1; j<n; j++){
            if(arr[x]>arr[j]){
                x = j;  //kafi simple logic hai ! dost!
            }
        }
        swap(arr[i],arr[x]);
    }
    print(arr,6);
    return 0;
}