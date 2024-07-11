#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){        
        int n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;

        s.push_back('F');
        

        int ptr = 0;
        bool found = true;
        while(ptr<n){
            if(ptr==0){
                int count = 1;
                while(s[ptr]!='L' && count<m && ptr<n){
                    count++;
                    ptr++;
                }
            }

            if(s[ptr]=='L'){
                ptr++;
                int count = 1;
                while(s[ptr]!='L' && count<m && ptr<n){
                    count++;
                    ptr++;
                }
            }
  

            if(ptr<n && s[ptr]=='C'){
                cout<<"NO"<<endl;
                found = false;
                break;
            }

            if(ptr<n && s[ptr]=='W'){
                while(k>=0 && s[ptr]!='L' && ptr<n){
                    if(k==0 && ptr<n){
                        cout<<"NO"<<endl;
                        found = false;
                        break;
                    }

                    k--;
                    ptr++;

                    if(s[ptr]=='C'){
                        cout<<"NO"<<endl;
                        found = false;
                        break;
                    }
                }
            }

            if(found==false){
                break;
            }
        }

        if(found) cout<<"YES"<<endl;
    }
    return 0;
}