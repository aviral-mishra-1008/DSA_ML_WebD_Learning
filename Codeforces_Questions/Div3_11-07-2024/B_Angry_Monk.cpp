#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){        
        int n,k;
        cin>>n>>k;

        vector<int> aloo;
        for(int i=0; i<k; i++){
            int x;
            cin>>x;
            aloo.push_back(x);
        }

        sort(aloo.begin(),aloo.end());
        int ans = 0;
        for(int i=0; i<k-1; i++){
            if(aloo[i]==1){
                ans++;
                continue;
            }
            ans = ans + 2*aloo[i] - 1;
        }

        cout<<ans<<endl;
    }
    return 0;
}