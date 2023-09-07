#include <bits/stdc++.h>
using namespace std;

bool isPossible(long long  int arr[], long long int n, long long int mid, long long int m){
    long long int height = 0;
    for(long long int i = 0; i<n; i++){
        if(arr[i]>mid){
            height = height+(arr[i]-mid);
        }

        else{
            continue;
        }
    }

    if(height>=m){
        return true;
    }

    else{
        return false;
    }
}



long long int cut(long long int rank[], long long int n, long long int m){
    long long int s = 0;
    sort(rank, n+rank);
    long long int e = rank[n-1];
    long long int h = 0;
    long long int mid = s+(e-s)/2;
    while(s<e){
        if(isPossible(rank, n, mid, m)){
            h = mid;
            s = mid+1;
        }

        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return h;

}


int main(){
    long long int arr[5] = {4,42,40,26,46};
    long long int m = 20;
    long long int h = cut(arr,5,m);
    cout<<"The Height Required Is: "<<h;
    return 0;
}