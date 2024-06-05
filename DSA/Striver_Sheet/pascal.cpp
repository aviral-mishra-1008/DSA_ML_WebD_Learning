#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int check = nums.size()/3;
    sort(nums.begin(),nums.end());

    vector<int> factor;

    int i=0; 
    while(i+check<nums.size()){
        int var = nums[i]^nums[i+check];
        if(var==0){
            i = i+check;
            factor.push_back(nums[i]);
            int val = nums[i];
            while(val==nums[i] && i+check<nums.size()){
                i++;
            }
        }

        else{
            i++;
        }
    }

    return factor;
}

int main(){
    vector<int> nums = {1,2,2,3,3,2,2,3,3};
    vector<int> ans = majorityElement(nums);
    for(auto i:ans){
        cout<<i<<",";
    }cout<<endl;
    return 0;
}