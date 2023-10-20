#include <iostream>
using namespace std;

void print(int arr[][2], int n, int m){
    for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
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
    // char ch = 49;
    int arr[2][2] = {{1,2},{3,4}};
    int temp = arr[]
    print(arr, 2,2);
    arr[0][0] = 11;
    cout<<endl;
    print(arr, 2,2);

}