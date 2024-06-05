#include <bits/stdc++.h>
using namespace std;

void mergeSum(long long arr[],vector<long long int> &num, long long p1, long long p2, long long p3, long long p4){
    
    while(p1<=p2){
        if(arr[p1]>arr[p3]){
            cout<<"p1: "<<p1<<","<<arr[p1]<<" p3: "<<p3<<","<<arr[p3]<<endl;
            num[0] += (long long int)(p3-p1);
            cout<<"count: "<<num[0]<<endl;
            
                while(p3<=p4 && p1<=p2){
                    swap(arr[p1],arr[p3]);
                    cout<<"swapping :"<<arr[p1]<<" with "<<arr[p3]<<endl;
                    p1++;
                }
            
            return;
        }
            
            p1++;
            
    }
        
    return;
    
}

void divide(long long arr[], long long low, long long high, vector<long long int> &num){
    if(low>=high){
        return;
    }
    
    long long mid = low + (high-low)/2;
    
    divide(arr,0,mid,num);
    divide(arr,mid+1,high,num);
    mergeSum(arr, num, low, mid, mid+1, high);
}

long long int inversionCount(long long arr[], long long N)
{
    vector<long long int> num(1,0);
    divide(arr,0,N,num);
    long long int count = num[0];
    
    return count;
}


int main(){
    long long arr[5] = {2,4,1,3,5};
    long  long int count = inversionCount(arr,5);
    cout<<count<<endl;
    return 0;
}