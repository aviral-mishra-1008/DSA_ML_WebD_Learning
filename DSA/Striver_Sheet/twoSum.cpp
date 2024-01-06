#include <bits/stdc++.h>
using namespace std;


    int Binary_search(vector<int>& nums, int s, int e, int key) {
        int start = s;
        int end = e;
        int mid = start + (end - start) / 2;

        while (start < end) {
            if (nums[mid] == key) {
                return mid;
            }

            if (key > nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }

            mid = (start + end) / 2;
        }
        return -1;
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            int ele = target - nums[i];
            cout<<i<<nums[i]<<endl;
            int FindNext = Binary_search(nums, i + 1, n, ele);
            cout<<FindNext<<endl;
            if (FindNext != -1) {
                result.push_back(i);
                result.push_back(FindNext);
                break;
            }
        }
        return result;
    }

int main(){
    vector<int> nums = {3,2,4};
    cout<<nums[0];
    int target = 6;
    vector<int> re = twoSum(nums,target);
    for(auto i:re){
        cout<<i<<",";
    }
    return 0;
}