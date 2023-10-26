#include <bits/stdc++.h>
using namespace std;

void printSpiral(int arr[][3], int n, int m){
    vector<int> v;
    int strow = 0;
    int endrow = n-1;
    int stcol = 0;
    int endcol = m-1;

    int count = 0;

    while(count<n*m){
        cout<<"count is: "<<count<<endl;
        //First Row
        for(int i=stcol; i<=endcol; i++){
            v.push_back(arr[strow][i]);
            count++;
        }
        strow++;

        //Last column
        for(int i= strow; i<=endrow; i++){
            v.push_back(arr[i][endcol]);
            count++;
        }
        endcol--;

        //Last Row
        for(int i = endcol; i>=stcol; i-- ){
            v.push_back(arr[endrow][i]);
            count++;
        }
        endrow--;

        //First Column
        for(int i = endrow; i>=strow; i--){
            v.push_back(arr[i][stcol]);
            count++;
        }

        stcol++;

        //Printing output
        for(auto i: v){
            cout<<i<<" ";
        }


    }
}


int main(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8, 9}};
    printSpiral(arr, 3,3);
    return 0;
}