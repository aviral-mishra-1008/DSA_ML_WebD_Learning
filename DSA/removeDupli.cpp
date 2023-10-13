#include <bits/stdc++.h>
using namespace std;


void removeDuplicates(string &s) {
    int i = 0;
    int j = 1;
    while(j!=s.length()){
        if(s[i]==s[j]){
            s.erase(i,2);
            i = 0;
            j = 1;
        }

        else{
            i++;
            j++;
        }

        if(j==s.length()){
            break;
        }
    }
}


int main(){
    string s = "aaa";
    removeDuplicates(s);
    cout<<s;
    return 0;
}