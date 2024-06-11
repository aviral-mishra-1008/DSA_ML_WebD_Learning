#include <bits/stdc++.h>
using namespace std;

int findLower(vector<long long> &v, long long x, long long low, long long high){
    cout<<low<<","<<high<<endl;
    if(low>=high){
        if(v[high]<=x){
            return v[high];
        }

        if(v[high]>x && high-1>=0){
            return v[high-1];
        }
        
        return -1;
    }
    
    long long mid = low + (high-low)/2;
    
    if(v[mid]==x){
        return x;
    }
    
    else if(v[mid]>x){
        return findLower(v,x,low,mid);
    }
    
    else{
        return findLower(v,x,mid+1,high);
    }
    
}

int findFloor(vector<long long> &v, long long n, long long x){
    return findLower(v,x,0,n-1);
}

int main(){
    vector<long long> v = {1};
    long long x = 2;
    long long n = 1;
    int ans = findFloor(v,n,x);
    cout<<ans<<endl;
    return 0;
}