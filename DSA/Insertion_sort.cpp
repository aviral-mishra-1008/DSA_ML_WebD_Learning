#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

int main(){
    int arr[6] = {1,9,3,22,13,6};
    int n= 6;
    int i = 0;
    while(i<n){
        int j = i-1;
        int temp = arr[i];
        while(j>0){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }

            else{
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        i++;
    }
    print(arr,6);
    return 0;
}