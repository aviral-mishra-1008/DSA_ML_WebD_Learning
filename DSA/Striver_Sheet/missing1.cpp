#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();
    
    for(int i=0; i<n; i++){
        if(nums[i]<0 || nums[i]>n){
            nums[i] = 0;
        }
    }

    for(int i=0; i<nums.size(); i++){
        if(nums[i]>0){
        if(nums[nums[i]-1]==0){
            nums[nums[i]-1] = -1;
            nums[i] = 0;
        }

        else if(nums[nums[i]-1]>0){
            swap(nums[i],nums[nums[i]-1]);
            nums[nums[i]-1] = -1;
        }

        i--;
        }
    }

    for(int i=0; i<nums.size(); i++){
        if(nums[i]==0){
            return i+1;
        }
    }

    return n+1;

}

int main(){

    vector<int> nums = {0};
    int ans = firstMissingPositive(nums);
    cout<<ans<<endl;
    return 0;
}