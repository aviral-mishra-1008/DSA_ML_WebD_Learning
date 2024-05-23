#include <stdio.h>
#include <stdlib.h>


int binsearch(int low, int high, int key, int arr[]){
    
    if(low==high){
        if(arr[low]==key){
            return low;
        }

        else{
            perror("Key not found!");
            exit(1);
        }
    }

    int mid = low+(high-low)/2;
    if(arr[mid]==key){
        return mid;
    }

    else if(arr[mid]<key){
        binsearch(mid+1,high,key,arr);
    }

    else{
        binsearch(low,mid,key,arr);
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int ind = binsearch(0,10,0,arr);
    printf("found value at %d",ind);
    return 0;
}