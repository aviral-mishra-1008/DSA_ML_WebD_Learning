#include <bits/stdc++.h>
using namespace std;


int Binary_search(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
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
    
    return 0;
}