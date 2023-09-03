#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}


bool isPossible(int arr[], int n, int mid, int m){
    int dish = 0;
    for(int i = 0; i<n; i++){
        int rank = arr[i];
        int time = 0;
        int R = 1;
        while(time+R*rank<=mid){
            dish++;
            time = time + R*rank;
            R++;
        }
        cout<<"For "<<rank<<" The Dishes are: "<<dish<<endl;
        
        time =0;
        R = 1;
    }
    if(dish>=m){
        return true;
    }

    else{
        return false;
    }
}

int minTime(int rank[], int n, int m){
    sort(rank, n+rank);
    print(rank,6);
    cout<<endl;
    int s = 0;
    int e = 0;

    for(int i=1; i<=m; i++){
        e = e + rank[0]*i;
    }
    cout<<e<<endl;
    int mid = s + (e-s)/2;
    while(s<e){
        cout<<"mid is : "<<mid<<endl;
        if(isPossible(rank, n, mid, m)){
            e = mid;
        }

        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return mid;
}

int main(){
    int arr[8] = {1,1,1,1,1,1,1,1};
    int m = 8;
    int x = minTime(arr, 8, m);
    cout<<x;
    return 0;
}