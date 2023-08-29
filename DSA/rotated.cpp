#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){

        if(arr[mid]>=arr[0]){
            s = mid+1;
        }

        else{
            e = mid;
        }

        mid = s+(e-s)/2;
    }
    return s;
}

int Binary_search(int arr[], int s, int e, int key){
    int start = s;
    int end = e;
    // int mid = (start+end)/2;
    //always we use this: 
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }

        if(key>arr[mid]){
            start = mid+1;
        }

        else{
            end = mid-1;
        }

        mid = (start+end)/2;
    }
    return -1;
}



int main(){
    int arr[6] = {6,5,4,1,2,3};
    int n =6;
    int k  = 4;
    int pi = pivot(arr,6);
    if(k>= arr[pi] && k<= arr[n-1]){
        int x =  Binary_search(arr, pi, n-1, k);
        cout<<x;

    }

    else{
        int x = Binary_search(arr, 0, pi-1, k);
        cout<<x;
    }
    

    return 0;
}