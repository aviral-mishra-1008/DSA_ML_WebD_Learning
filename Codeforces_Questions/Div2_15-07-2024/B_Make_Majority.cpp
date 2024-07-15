#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;


        vector<int> nums;
        for(auto i:s){
            int x = i-'0'; 
            nums.push_back(x);
        }

        int i = 0;
        int count0 = 0;
        int count1 = 0;

        while(i<nums.size()){
            if(nums[i]==1 && count0>1 && count1==0){
                int rem = i-count0;
                nums.erase(nums.begin()+rem, nums.begin()+i-1);
                i = i-count0+1;
                count0 = 0;
            }

            else if(nums[i]==1 && count0<1){
                count1 = 1;
            }

            else if(nums[i]==1 && count1==1){
                if(count0>1){
                    nums.erase(nums.begin()+(i-count0),nums.begin()+i-1);
                    i = i-count0+1;
                    count0 = 0;
                }

            }

            if(nums[i]==1 && count0==1) count0=0;
            
            if(nums[i]==0) count0++;
            i++;
        }

        if(count0>1){
            nums.erase(nums.begin()+(nums.size()-count0),nums.begin()+nums.size()-1);
        }

        // cout<<"Output: ";
        // for(auto i:nums){
        //     cout<<i<<',';
        // }cout<<endl;

        count0 = 0;
        count1 = 0;

        for(auto i:nums){
            if(i==0) count0++;
            if(i==1) count1++;
        }

        if(count1>count0){
            cout<<"Yes"<<endl;
            continue;
        }
        else{
            cout<<"No"<<endl;
            continue;
        }

    }

    return 0;
}