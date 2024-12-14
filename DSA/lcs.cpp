#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> all_longest_common_subsequences(string s, string t) {
    
    int n = s.size();
    int m = t.size();
    
    
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    
    //define base cases
    //do nothing

    //iterate
    for(int i=1; i<=n;i++){
        for(int j=1; j<=m; j++){
            if(s[i-1]==t[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    
    
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            cout<<dp[i][j];
        }cout<<endl;
    }cout<<endl;

    return dp;
}

int main(){

    string s = "abaaa";
    string t = "baabaca";

    vector<vector<int>> dp = all_longest_common_subsequences(s,t);
    
    int n = s.size();
    int m = t.size();

    string ans = "";

    int i = n;
    int j = m;

    while(i>0 && j>0){
        if(s[i-1]==t[j-1]){
            ans+=s[i-1];
            i--;
            j--;
        }

        else if(dp[i-1][j]>dp[i][j]){
            i--;
        }

        else{
            j--;
        }
    }

    reverse(ans.begin(),ans.end());
    cout<<"ans: "<<ans<<endl;
    return 0;
}