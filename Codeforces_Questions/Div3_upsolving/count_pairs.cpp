#include <bits/stdc++.h>
#define ll long
using namespace std;

int main(){    
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n;
        cin>>x;
        cin>>y;
        vector<ll> ai;
        for(int i=0; i<n; i++){
            ll a;
            cin>>a;
            ai.push_back(a);
        }


        ll sum = accumulate(ai.begin(),ai.end(),0ll);
        sort(ai.begin(), ai.end());
        ll count = 0;

        for(int i=0; i<n-1;i++){
            ll req = sum-ai[i];
            ll indUB = upper_bound(ai.begin()+i+1, ai.end(),req-x) - ai.begin();
            ll indLB = lower_bound(ai.begin()+i+1, ai.end(),req-y) - ai.begin();
            count+=indUB-indLB;
        }

        cout<<count<<endl;
    }
    return 0;
}