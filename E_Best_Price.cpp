#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a;
        vector<int> b;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            b.push_back(x);
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int sum = 0;

        int i = n-1;
        while(k>0){
            if(a[i]<b[i]){
                sum+=b[i];
                k--;
            }
            else{
                sum+=a[i];
            }

            i--;
        }

        if(i>=0){
            sum+=a[i];
            i--;
        }

        cout<<sum<<endl;
    }

    return 0;
}