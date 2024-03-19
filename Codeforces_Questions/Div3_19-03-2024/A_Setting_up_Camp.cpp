#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        int b;
        int c;

        cin>>a;
        cin>>b;
        cin>>c;

        int n;

        n=a;

        n = n+(b/3);
        b = b%3;
        
        if((b+c)<3 && b>0){
            cout<<-1<<endl;
            continue;
        }
        else{
            n = n+((b+c)/3);
        }
        int miss = (b+c)%3;
        if(miss){
            n = n+1;
        }
        cout<<n<<endl;
    }
}