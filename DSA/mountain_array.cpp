#include <bits/stdc++.h>
using namespace std;

int mountain(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }

        else{
            e = mid;
        }
        mid = s+(e-s)/2;  //never forget to update mid
    }
    return s;
}

int main(){
    int arr[6] = {1,2,5,4,3,1};
    int x = mountain(arr, 6);
    cout<<"Peak element is: "<<arr[x];
    return 0;
}