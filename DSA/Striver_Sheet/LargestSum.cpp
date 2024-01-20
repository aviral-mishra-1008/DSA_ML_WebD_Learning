#include <bits/stdc++.h>
using namespace std;

vector<int> findMax(vector<int> &nums){
    int n = nums.size();
    for(int i=0; i<n; i++){
        vector<int> check; 
        int sum = 0;
        for(int j=i; j<n;j++){
            check.push_back(nums[j]);
            sum = sum+nums[j];
            
        }
    }
}


int main(){
    return 0;
}