#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid){
    int student = 1;
    int pages = 0;
    for(int i = 0; i<n; i++){
        // cout<<"Yes";
        if(pages+arr[i]<=mid){
            pages = pages+arr[i];
        }

        else{
            student++;
            if(student>m || arr[i]>mid){
                return false;
            }
            pages = arr[i];
        }
    }
    return true; 
}   

int bookallo(int arr[], int n, int m){
    //finding sum
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    int s = 0;
    int e = sum;
    int mid = s+(e-s)/2; 
    int ans = -1;
    while(s<=e){
    // cout<<"No";
    if(isPossible(arr, n, m, mid)){
        ans = mid;
        e = mid-1;
    }

    else{
        s = mid+1;
    }
    mid = s+(e-s)/2;
  }
  return ans;
}


int main(){
    int arr[4] = {10,20,30,40};
    int value = bookallo(arr, 4, 4);
    cout<<"Value is: "<<value;
    return 0;
}