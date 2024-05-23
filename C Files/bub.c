#include <stdio.h>

void selection(int arr[], int n){
    for(int i=1;i<n;i++){
        int check = arr[i];
        int j = i-1;
        while(arr[j]>check && j>=0){
            int temp = arr[j];
            arr[j] = check;
            arr[j+1] = temp;
            j--; 
        }
    }
}

int main(){
    int n = 5;
    int arr[5] = {2,1,3,5,4};
    insertion(arr,n);
    for(int i=0; i<5; i++){
        printf("%d,",arr[i]);
    }

    return 0;
}