#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> arr, int n, int m){
    for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


void rotate(vector<vector<int>> &arr ,int n, int m){
    queue<int> q;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=0; j--){
            int x = arr[j][i];
            q.push(x); 
        }
    }

    arr.clear();
    arr.resize(n, vector<int>(m));

    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
            int x = q.front();
            q.pop();
            arr[i][j] = x;
        }
    }

}

int main(){
    vector<vector<int>> arr = {{1,2,3,4}, {1,2,3,4}, {1,2,3,4}, {1,2,3,4}};
    print(arr,4,4);
    cout<<endl;
    rotate(arr,4,4);
    print(arr,4,4);
    return 0;
}