#include <bits/stdc++.h>
using namespace std;
void print(int arr[][3], int n, int m){
    for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


void rotate(int arr[][3], int n, int m){
    int c = n-1;
    int x =0;
    int y=0;
    for(int i=0; i<n; i++){
        int d = 0;
        for(int j=0; j<m; j++){
            if(d==n-1){
                cout<<endl;
                int temp = arr[d][c];
                cout<<"value in temp is: "<<temp<<" and we wish to replace with: "<<arr[x][y]<<endl;
                int r = arr[x][y];
                arr[d][c] = r;
                arr[x][y] = temp;
                x++;
                print(arr, 3, 3);

            }
            else{
                cout<<endl;
                int temp = arr[d][c];
                cout<<"value in temp is: "<<temp<<" and we wish to replace with: "<<arr[i][j]<<endl;
                int x = arr[i][j];
                print(arr, 3, 3);
                cout<<endl;
                arr[d][c] = x;
                arr[i][j] = temp;
                d++;
                print(arr, 3, 3);
          }
        }
        c--;
    }
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{6,8,9}};
    // print(arr, 3, 3);
    rotate(arr,3,3);
    // print(arr, 3, 3);
    return 0;
}