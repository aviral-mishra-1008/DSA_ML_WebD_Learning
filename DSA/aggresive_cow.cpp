#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int k,int n, int mid){
    int cow = 1;
    int position = arr[0];
    for(int i =0; i<n; i++){
        if(arr[i]-position>=mid){
            cow++;
            if(cow==k){
                return true;
            }
            position = arr[i];
        }
    }
    return false;

}

int aggressiveCows(int arr[], int n, int k ){
    sort(arr,n + arr);
    int s =0;
    int maxi = arr[n-1];
    int e = maxi;
    int ans = -1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(isPossible(arr, k, n, mid)){
            ans = mid;
            s = mid+1;
        }

        else{
            e = mid-1;
        }

        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[4] = {1,2,4,5};
    int k = 3;
    int x = aggressiveCows(arr, 4, k);
    cout<<x;
    return 0;
}