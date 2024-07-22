#include <bits/stdc++.h>
using namespace std;


int findSol(int ind, vector<int> &nums, vector<int> &dp){
    if(ind>=nums.size()-1) return 0;
    if(dp[ind]!=-1) return dp[ind];

    int ans = INT_MAX;
    for(int i=1; i<=nums[ind]; i++){
        int pick = 1+findSol(ind+i,nums,dp);
        ans = min(ans,pick);
    }

    return dp[ind] = ans;
}

int jump(vector<int>& nums) {
    vector<int> dp(nums.size(),-1);
    return findSol(0, nums, dp);
}

int main(){
    vector<int> nums = {2,3,0,1,4};
    int ans = jump(nums);
    cout<<ans<<endl;
    return 0;
}