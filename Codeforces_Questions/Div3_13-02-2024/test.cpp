#include <bits/stdc++.h>
using namespace std;

string findPoss(vector<int> &nums, int n){
    int sum = 0;
    for(auto i: nums){
        sum = sum+i;
    }
    int level = sum/n;
    int store = 0;
    cout<<sum<<" level: "<<level<<endl;

    for(auto i:nums){
        if(i>=level){
            cout<<" i: "<<i<<" in if"<<endl;
            store = store+(i-level);
        }
        else if(i<level){
            cout<<" i: "<<i<<" in else"<<endl;
            store = store-(level-i);
        }

        if(i<0){
            return "NO";
        }
    }
    return "YES";
}


int main(){
    int n = 2;
    vector<int> nums = {1,3};
    string s = findPoss(nums, n);
    cout<<s<<endl;
    return 0;
}