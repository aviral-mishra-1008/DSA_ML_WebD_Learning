#include <iostream>
#include <limits.h>
using namespace std;

void print(int arr[], int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    for(start,end; start<end; start++, end--){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}

int len(int arr[]){
    int length = sizeof(arr)/sizeof(arr[0]);
    return length;
}

int lin_search(int arr[], int size, int key){
    int found = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            found =  1;
        }
    }
    return found;
}


int Max(int num[], int n){
    int max  = INT_MIN;

    for(int i=0; i<n; i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}

int Min(int num[], int n){
    int min  = INT_MAX;

    for(int i=0; i<n; i++){
        if(num[i]<min){
            min = num[i];
        }
    }
    return min;
}

