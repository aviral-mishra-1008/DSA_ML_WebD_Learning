#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

void reverse(int arr[], int n, int m){
    int s = m+1;
    int e = n-1;
    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void merge(int arr1[], int arr2[], int arr3[], int m, int n) {
        int i = 0 ;
        int j = 0;
        int k =0;
        while(k<m+n){
            if(arr1[i]<arr2[j]){
                arr3[k] = arr1[i];
                i++;
                k++;
            }

            else if(arr1[i]>=arr2[j]){
                arr3[k] = arr2[j];
                j++;
                k++;
            }
        }
    }
void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 1;
        cout<<nums.size();
        while(i<nums.size()){
            if(nums[i]==0 && nums[j]==0){
                continue;
                j++;
            }
            else if(nums[i]==0 && nums[j]!=0){
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
            cout<<i;

        }
    }


int main(){
    int arr1[3] = {1,2,3};
    int arr2[3] = {2,4,6};
    int arr3[6] = {0};
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);
    nums.push_back(4);

    moveZeroes(nums);
    print(arr3,6);
    return 0;
}
