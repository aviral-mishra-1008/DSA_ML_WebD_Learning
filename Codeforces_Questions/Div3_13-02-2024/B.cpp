#include <bits/stdc++.h>
using namespace std;

string findPoss(vector<int> &nums, int n){
    int sum = 0;
    for(auto i: nums){
        sum = sum+i;
    }
    int level = sum/n;
    int store = 0;
    for(auto i:nums){
        if(i>=level){
            store = store+(i-level);
        }
        else if(i<level){
            store = store-(level-i);
        }

        if(store<0){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums;
        for(int i=0;i<n;i++){
            int nn;
            cin>>nn;
            nums.push_back(nn);
        }
        string s = findPoss(nums, n);
        cout<<s<<endl;
    }
    return 0;
}