#include <bits/stdc++.h>
using namespace std;

void printWave(int arr[][4], int n, int m){
    for(int j=0; j<m; j++){
        if(j%2==0){
            int i = 0;
            while(i<n){
                cout<<arr[i][j]<<" ";
                i++;
            }
        }

        else{
            int i = n-1;
            while(i>=0){
                cout<<arr[i][j]<<" ";
                i--;
            }
        }
    }
}


vector<int> printSpiral(int arr[][4], int n, int m){
    vector<int> v;
    int i = 0;
    int j = 0;
    while(i!=n-1 && j!=m-1){
        if(j<m && i==0){
            v.push_back(arr[i][j]);
            j++;
        }

        else if(j==m && i<n){
            v.push_back(arr[i][j]);
            i++;
        }

        else if(i==n && j>0){
            v.push_back(arr[i][j]);
            j--;
        }

        else if(j==0 && i>0){
            v.push_back(arr[i][j]);
            i--;
        }

        else if(j>0 && i>0 && j!=m && i!=n){
            v.push_back(arr[i][j]);
            j++;
        }
    }
    return v;
}

int main(){
    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    printWave(arr, 3, 4);
    vector<int> v = printSpiral(arr, 3,4);
    for(auto i: v){
        cout<<i<<" ";
    }
    return 0;
}