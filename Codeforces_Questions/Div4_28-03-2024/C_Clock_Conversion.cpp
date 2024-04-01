#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans = ""; 

        if(s[0]=='0' && s[1]=='0'){
            ans = ans+"12:";
            ans = ans+s[3]+s[4]+" AM";
            cout<<ans<<endl;
            continue;
        }

        if(s[0]=='1' && s[1]=='2'){
            ans = ans+"12:";
            ans = ans+s[3]+s[4]+" PM";
            cout<<ans<<endl;
            continue;
        }


        bool Am = false;

        if(s[0]=='0' && s[1]!='0'){
            Am = true;
        }
        else if(s[0]=='1' && (s[1]=='0' || s[1]=='1')){
            Am = true;
        }

        if(Am){
            s = s+" AM";
            cout<<s<<endl;
            continue;
        }

        else{
            int hour = (s[0]-'0')*10 + (s[1]-'0');
            hour = hour-12;
            char check1 = hour/10 + '0';
            char check2 = hour%10 + '0';

            ans = ans+check1+check2+":"+s[3]+s[4]+" PM";            
            cout<<ans<<endl;
            continue;

        }



}
    return 0;
}