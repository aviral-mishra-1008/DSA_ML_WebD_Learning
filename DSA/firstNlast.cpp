#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int key){
    //we are trying to find the first occurence using the binary search approach
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        //see we define the condition that let's say the element was found at mid and then we try to see if there's any more element towards the left to find the first occurence and we assign the suppposed answer to the ans variable so that means;
        //if there is any update to it, it means there was an element in left else it is left untouched
        //so we bring the end to mid-1 and start wahi rehta jo tha and scan in this limit for mid
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        //now let's define the condition that say we couldn't find the element in mid and the element in mid is actually less than the key so being sorted we will move right
        //so we bring the start to the mid+1 so that we can traverse the right portion

        else if(key>arr[mid]){
            start = mid + 1;
        }

        //now once a condition occurs that the element in mid is greater than key so in such case we move towards left
        //so we bring the end to the mid-1 and scan the remaining 

        else if(key<start){
            end = mid-1;
        }

        //lastly we update the mid value based on changes in places and position of end/start
        mid = start + (end-start)/2;
    }
    return ans;
}


int lastOcc(int arr[], int n, int key){
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        //everything is same its just now incase the element at mid is key we need to traverse the right side instead of left and we do so by bringing the start to mid-1
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }

        else if(key>arr[mid]){
            start = mid + 1;
        }

        else if(key<start){
            end = mid-1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

int NumOcc(int arr[], int n, int key){
    // we can use the bound function to calculate the number of occurences of a particular element 
    int x = firstOcc(arr, n, key);
    int y = lastOcc(arr, n, key);
    int ans = y-x+1;
    return ans;
}
int main(){
    
    int arr[11] = {1,1,1,2,2,2,2,3,3,3,3};
    cout<<" First Occurence of 3 is: "<< firstOcc(arr, 11, 3)<<endl;
    cout<<" Last Occurence of 3 is: "<< lastOcc(arr, 11, 3)<<endl;
    pair<int,char> p;
    p.first = firstOcc(arr,11,2);
    p.second = 'y';
    cout<<p.first;
    //another way to declare a pair
    pair<int, char> g = {2,'r'};
    cout<<g.first;
    return 0;
}