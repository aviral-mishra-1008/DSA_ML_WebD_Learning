#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        long long a;
        long long b;
        long long m;

        cin>>a;
        cin>>b;
        cin>>m;

        long long ans;
        ans = 0;

        ans = ans + ((a+m)/a) + ((b+m)/b);

        cout<<ans<<endl;

    }
    return 0;

}