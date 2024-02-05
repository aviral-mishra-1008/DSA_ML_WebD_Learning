#include <bits/stdc++.h>
using namespace std;

int atoi(string s) {
    map<char,int> mapInt = {
        {'0',0},
        {'1',1},
        {'2',2},
        {'3',3},
        {'4',4},
        {'5',5},
        {'6',6},
        {'7',7},
        {'8',8},
        {'9',9}
        };
    int ans = 0;
    int k = s.size()-1;
    int bit = 1;
    for(int i=0;i<s.size();i++){
        try{
            char nn = s[i];
            if(nn=='-' && i==0){
                bit = -1;
                k--;
                continue;
            }
            int n = mapInt.at(nn);
            int check = ceil(pow(10,k));
            ans = ans + check*n*bit;
            k--;
        }
        
        catch(const out_of_range&){
            return -1;
        }
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    int n = atoi(s);
    cout<<n;
}