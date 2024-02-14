#include <bits/stdc++.h>
using namespace std;


string findLeast(int n){
    string ans = "";
    int net = 26*3;
    bool found = false;
    int ind = 1;
    int check = n;
    while(found!=true){
        if(check-ind<=26*2){
            char ch = ind + 'a' -1;
            ans = ans+ch;
            check = check-ind;
            found = true;
        }
        ind++;
    }

    found = false;
    ind = 1;

    while(found!=true){
        if(check-ind<=26*1){
            char ch = ind + 'a' - 1;
            ans = ans+ch;
            check = check-ind;
            found = true;
        }
        ind++;
    }

    char c = check+'a'-1;
    ans = ans+c;
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s = findLeast(n);
        cout<<s<<endl;;
    }
    
    return 0;
}