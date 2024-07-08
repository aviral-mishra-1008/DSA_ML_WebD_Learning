#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3,n4;
        cin>>n1;
        cin>>n2;
        cin>>n3;
        cin>>n4;

        if((n1>n2 && n3>n4) || (n2>n1 && n4>n3)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}