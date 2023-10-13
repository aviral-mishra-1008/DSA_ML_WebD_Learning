#include <iostream>
using namespace std;


void print(int arr[], int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

int main(){
    // int arr[6] = {1,2,2,3,3,3};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // int arr2[size] = {0};
    // for(int i=0; i<size; i++){
    //     int count = 0;
    //     for(int j = 0; j<size; j++){        
    //        if(arr[i]==arr[j]){
    //         count++;
    //        }
    //        else{
    //         continue;
    //        }
    //     arr2[i]==count;
    //     for(int k = 0; k<size; k++){
    //         if(arr2[i]!=arr2[k]){
    //             cout<<"Yes";
    //             return true;
    //         }
    //         else if(arr2[i]==arr2[k] && i!=k){
    //             cout<<"No";
    //             return false;
    //         }
    //     }
    // }
    //     }
    // print(arr2,6);
    char ch = 49;
    cout<<ch;

}