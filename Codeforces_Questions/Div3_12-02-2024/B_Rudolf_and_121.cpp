#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int n;
        cin>>n;
        for(int i=0; i<n;i++){
            int x;
            cin>>x;
            if(x==0){
                continue;
            }
            v.push_back(x);
        }

        int po = v.size()-1;
        int num = 0;
        for(int i=0; i<v.size(); i++){
            int f = ceil(pow(10,po));
            num = num + f*v[i];
            po--;
        }
        if(num%121==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }    
    return 0;
}