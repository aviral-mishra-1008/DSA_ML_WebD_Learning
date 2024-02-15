#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int j, int i){
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void findPart(vector<vector<string>> &ans, vector<string> &parts, string s,int ind){
    if(ind==s.size()){
        ans.push_back(parts);
        return;
    }

    for(int i=ind;i<s.size();i++){
        if(isPalindrome(s,i,ind)){
            string sh = "";
            for(int j=ind;j<=i;j++){
                sh=sh+s[j];
            }
            parts.push_back(sh);
            findPart(ans,parts,s,i+1);
            parts.pop_back();
        }
    }
}

int main(){
    vector<vector<string>> ans;
    vector<string> parts;
    string s = "aabba";
    int ind = 0;
    findPart(ans,parts,s,ind);
    for(auto i:ans){
        for(auto j: i){
            cout<<j<<",";
        }cout<<endl;
    }
    return 0;
}