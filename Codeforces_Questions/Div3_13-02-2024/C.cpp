#include <bits/stdc++.h>
using namespace std;

int findPoss(vector<int> &nums, int n){
    int i = 0;
    int j = n-1;

    if(n==1){
        return 0;
    }

    if(nums[i]==nums[j]){
        while(nums[i]==nums[i+1]){
            i++;
            if(i==j){
                return 0;
            }
        }

        if(nums[i]==nums[j]){
            while(nums[j-1]==nums[j]){
                j--;
            }
            j--;
        }

        i++;

    return j-i+1;
    }

    else{
        int countI = 0;
        int countJ = 0;
        while(nums[j-1]==nums[j]){
            countJ++;
            j--;
        }

        while(nums[i]==nums[i+1]){
            countI++;
            i++;
        } 

        if(countI>=countJ){
            i++;
            j = n-1;
            return j-i+1;
        }

        else{
            j--;
            i=0;
            return j-i+1;
        }
    }
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
        int ans = findPoss(nums, n);
        cout<<ans<<endl;
    }
    return 0;
}