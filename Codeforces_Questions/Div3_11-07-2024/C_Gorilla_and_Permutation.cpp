#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){        
        int n,m,k;
        cin>>n>>m>>k;

        vector<int> nums;
        int check = n;
        while(check>=k){
            nums.push_back(check);
            check--;
        }

        while(check>m){
            nums.push_back(check);
            check--;
        }

        int newCheck = 1;
        while(newCheck<=check){
            nums.push_back(newCheck);
            newCheck++;
        }

        for(auto i:nums){
            cout<<i<<' ';
        }cout<<endl;

    }
    return 0;
}