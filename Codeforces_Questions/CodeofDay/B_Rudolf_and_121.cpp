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

        int i = 1;
        bool found = true;
        while(i<n-1 && found!=false){
            while(v[i]!=0){
                v[i-1] = v[i-1]-1;
                v[i] = v[i]-2;
                v[i+1] = v[i+1]-1;

                if(v[i-1]<0 || v[i]<0 || v[i+1]<0){
                    cout<<"No"<<endl;
                    found = false;
                    break;
                }
            }
            i = i+2;
        }

        if(found && v[v.size()-1]==0){
            cout<<"Yes"<<endl;
        }

        if(found && v[v.size()-1]!=0){
            cout<<"No"<<endl;
        }
    return 0;
}

}