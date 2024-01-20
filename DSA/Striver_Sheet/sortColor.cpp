#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>& nums, int i, int heapsize){
    int left = (i+1)*2-1;
    int right = (i+1)*2;
    cout<<left<<" "<<right<<endl;
    int largest = i;
    if(left<=heapsize && nums[i]<nums[left]){
        largest = left;
    }
    if(right<=heapsize && nums[largest]<nums[right]){
        largest = right;
    }

    if(largest!=i){
        swap(nums[i],nums[largest]);
        heapify(nums, largest, heapsize);
    }
}

void buildMaxHeap(vector<int>& nums){
    int n = nums.size()-2;
    for(int i=n/2; i>=0; i--){
        heapify(nums,i,n+1);
    }
}

void MaxHeapSort(vector<int>& nums){
    int n = nums.size()-1;
    buildMaxHeap(nums);
    int heapsize = n;
    for(int i=n; i>=1; i--){
        swap(nums[0],nums[i]);
        heapsize--;
        heapify(nums,0,heapsize);
    }
}
void sortColors(vector<int>& nums) {
    MaxHeapSort(nums);
}

int main(){
    vector<int> nums = {0,2,1};
    sortColors(nums);
    for(auto i: nums){
        cout<<i<<",";
    }
    return 0;
}