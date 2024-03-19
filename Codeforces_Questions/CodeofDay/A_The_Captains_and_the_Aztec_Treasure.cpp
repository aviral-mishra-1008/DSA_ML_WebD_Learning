#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int a;
        int b;

        cin>>n;
        cin>>a;
        cin>>b;

        int x = n%(a+b);
        if(x<=b && x>0){
            cout<<"Barbossa"<<endl;
        }
        else{
            cout<<"Sparrow"<<endl;
        }

    }

    return 0;
}