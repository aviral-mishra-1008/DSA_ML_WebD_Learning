#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> freq;

        for(auto i:s){
            freq[i]++;
        }

        char odd;
        bool foundit = false;
        int sum = 0;
        for(auto it:freq){
            if(it.second%2==1){
                if(foundit){
                    cout<<s.size()<<endl;
                    break;
                }

                else{
                    odd = it.first;
                    foundit = true;
                }
            }

            else{
                sum+=it.second;
            }
        }

        if(sum%2!=0){
            cout<<s.size()<<endl;
            continue;
        }

    
}
    return 0;
}