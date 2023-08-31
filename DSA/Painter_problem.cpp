#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum+arr[i];
    }
    return sum;
}

bool isPossible(int arr[], int n , int mid, int k){
    int board = 0;
    int painters = 1;
    for(int i=0; i<n; i++){
        if(board+arr[i]<=mid){
            cout<<"Board: "<<board<<endl;
            board=board + arr[i];
        }
        else{
            painters++;
            if(painters>k || arr[i]>mid){
                cout<<"DONE"<<endl;
                return false;
            }
            board = arr[i];
        }
    }
    return true;
}

int Painters(int arr[], int n, int k){
    int s = 0;
    int e = sum(arr,n);
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        cout<<"MID is: "<<mid<<endl;
        if(isPossible(arr, n, mid, k)){
            ans = mid;
            e = mid-1;
            cout<<"Updated end: "<<e<<endl; 
        }
        else{
            s = mid+1;
            cout<<"Updated start: "<<s<<endl;
        }
    mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[4] = {5,5,5,5};
    int k = 2;
    int Paint = Painters(arr, 4, k);
    cout<<"Value is: "<<Paint;
    return 0;

}