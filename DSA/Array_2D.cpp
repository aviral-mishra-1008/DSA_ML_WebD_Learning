#include <bits/stdc++.h>
using namespace std;


//to pass a 2D Array into the function defined we need to tell the number of columns in the function so that the processor can figure out how much storage space is required for that
bool isPresent(int arr[][3], int target, int n, int m){
    return true;
}

void rowSum(int arr[][3], int n, int m){
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<m; j++){
            count = count + arr[i][j];
        }
        cout<<"Sum of row "<<i+1<<" is : "<<count<<endl;
    }
}

int LargeRow(int arr[][3], int n, int m){
    int rownum = -1;
    for(int i=0; i<n; i++){
        int max = INT_MIN;
        int sum =0;
        for(int j=0; j<m; j++){
            sum = sum+ arr[i][j];
        }
        if(sum>max){
            max = sum;
            rownum = i+1;
        }
    }
    return rownum;
}
int main(){
    //see how we traverse, search and scan the 2D arrays and also ofc how we define them 
    //method one is <dtype> name[i][j] where i is row and j is column
    int arr[3][3]; //3x3 square matrix
    //one method to take input is by loops
    //other one is direct assignment
    int arr2[2][2] = {1,2,3,4}; //this takes row wise as in (1,2)
                                //                          (3,4)

    //also we can take row-wise
    int arr3[2][2] = {{1,2},{3,4}};

    //user input can be row first or column first
    for(int i=0; i<3; i++){
        for(int j =0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    //same can be used for printing
    for(int i=0; i<3; i++){
        for(int j =0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int n;
    cout<<"Enter the number to search for it: ";
    cin>>n;
    bool success = false;
    for(int i = 0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]==n){
                cout<<"The number "<<n<<" is present in the matrix at row: "<<i+1<<" and column: "<<j+1<<endl;
                success = true;
            }
        }
    }
    if(success==false){
        cout<<"The number couldn't be found :/";
    }


    rowSum(arr, 3, 3);
    int x = LargeRow(arr, 3,3);
    cout<<"Largest row is row number: "<<x<<endl;
    //for column wise we need to replace i and j
    return 0;
}