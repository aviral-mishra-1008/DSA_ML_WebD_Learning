#include <bits/stdc++.h>
using namespace std;

bool in(int i, int num, vector<int> &v){
    for(int j=i; j<v.size(); j++){
        if(v[j]==num){
            return true;
        }

        if(num<v[j]){
            break;
        }
    }
    return false;
}

int subarraySum(vector<int>& nums, int k) {
        vector<int> v(nums.size(),0);
        for(int i=0; i<nums.size();i++){
            if(i==0){
            v[i] = nums[i];
            }
            else{
            v[i] = v[i-1]+nums[i];
            }
        }

        int count = 0;
        for(int i=0;i<v.size();i++){
            int num = v[i]+k;
            if(in(i,num,v)){
                count++;
                cout<<count<<endl;
            }
        }
return count;
}

int main(){
    vector<int> nums = {1,2,1};
    int coun = subarraySum(nums,3);
    cout<<coun<<endl;
    return 0;
}