#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    vector<int> left;
    vector<int> right;
    for(int i=l;i<=mid;i++){
        left.push_back(arr[i]);
    }
    for(int i=mid+1;i<=r;i++){
        right.push_back(arr[i]);
    }
    int i = 0;
    int j = 0;
    int k = l;
    while(i<left.size() && j<right.size()){
        if(left[i]<=right[j]){
            arr[k++] = left[i];
            i++;
        }
        else{
            arr[k++] = right[j];
            j++;
        }
    }
    while(i<left.size()){
        arr[k++] = left[i++];
    }

    while(j<right.size()){
        arr[k++] = right[j++];
    }
}

void mergeSort(int arr[], int l, int r) {
    if(l>=r){
        return;
    }
    int mid = l+(r-l)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr,l,mid,r);
}

int main(){
    int arr[5] = {4,1,3,2,5};
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}