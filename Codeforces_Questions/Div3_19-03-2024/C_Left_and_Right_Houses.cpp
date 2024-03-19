#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> nums; 
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }

        vector<int> possible;
        int counter = 0;
        for(int i = 0; i<nums.size(); i++){
            int check = nums[i];
            counter = counter+check;
            if(counter>(i+1)/2){
                continue;
            }
            int sum = 0;
            for(int j=i; j<nums.size();i++){
                sum = sum+nums[j];
                if(sum>=(n-i-1)/2){
                    possible.push_back(i+1);
                    break;
                }
            }
        }
        cout<<"ho gya"<<endl;
        int ans = possible[possible.size()-1];
        cout<<ans<<endl;

    }
    return 0;

}