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
            parts.push_back(s.substr(ind,i-ind+1)); //substr takes two params, initial index which is ind then number of characters to insert into substring that is i-ind+1
            findPart(ans,parts,s,i+1);
            parts.pop_back();
        }
    }
}

int main(){
    vector<vector<string>> ans;
    vector<string> parts;
    string s = "aabb";
    int ind = 0;
    findPart(ans,parts,s,ind);
    for(auto i:ans){
        for(auto j: i){
            cout<<j<<",";
        }cout<<endl;
    }
    return 0;
}