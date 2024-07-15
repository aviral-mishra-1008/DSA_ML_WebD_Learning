#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        if(n==1){
            cout<<0<<endl;
            continue;
        }

        if(k>=n){
            cout<<1<<endl;
            continue;
        }
        
        int factor = k-1;
        int count = 0;
        while(n>1){
            count++;
            n = n-factor;
        }

        cout<<count<<endl;
    }
    return 0;
}