#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int n){
    int s =0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid-1]>arr[mid]){
            return arr[mid];
        }

        else if(arr[mid]>arr[0]){
            s = mid+1;
        }

        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[5] = {3,4,5,0,2};
    int x = pivot(arr,5);
    cout<<x;
    return 0;
}