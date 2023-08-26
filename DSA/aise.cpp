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
    int arr[6] = {1,3,2,1,3,3};
    // print(arr,6);
    sort(arr,arr+6);
    int count[6] = {0};
    print(arr,6);
    for(int i = 0; i<6; i++){
        int count = 0;
        for(int j = i; j<6; j++){
            if(arr[j]==arr[j-1]){
                continue;
            }
            else{ 
            if(arr[i]==arr[j]){
                count++;
            }

            else if(arr[i]!=arr[j]){
                break;
            }
            }
        }
        cout<<count;
    }
return 0;
}