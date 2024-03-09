#include <bits/stdc++.h>
using namespace std;


bool findPrime(int n){
vector<bool> nums(n,true);  
for(int i=2;i*i<=n;i++){
    if(nums[i]){
        for(int j=i*i;j<=n;j++){
            nums[j]=false;
        }
    }
}
return nums[nums.size()];
}

void print(int n){
    vector<int> p(n,0);
    cout<<p.size()<<endl;
    for(auto i:p){
        cout<<i<<endl;
    }
}
int main(){
    int n = 127213;
    bool find = findPrime(n);
    cout<<find<<endl;
    return 0;
}