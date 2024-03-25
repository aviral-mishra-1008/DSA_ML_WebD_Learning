#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums = {3,9,6};
    int k = 2;
    sort(nums.begin(),nums.end());
    long count = 0;
    long l = 0;
    long r = 0;
    long total = nums[r];
    while(r<nums.size()){
        while((r-l+1)*(nums[r])<=total+k && r<nums.size()){
            r+=1;
            total += nums[r];
        }
        total-=nums[l];
        l+=1;
        count = max(count,r-l+1);
    }
    cout<<count<<endl;
    return 0;
}