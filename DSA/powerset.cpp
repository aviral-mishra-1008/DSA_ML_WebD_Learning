#include <bits/stdc++.h>
using namespace std;

vector<string> powerSet(string s){
    vector<string> ans;
    int n = s.size();
    for(int i=0; i<pow(2,n); i++){ //now 1<<n means 2**n
         string str = "";
         for(int j=0; j<n; j++){
            if(i & (1<<j)){    //we use bitwise and here and not logical and (bitwise- & and logical- &&)   //this condition checks for the set bit which means, if its set bit then it gives 1 else 0 for set bit refer to notes
                str = str+s[j];
            }
         }
         ans.push_back(str);
    }  
    return ans;
}

int main(){
    string s = "abc";
    vector<string> v = powerSet(s);
    cout<<"["<<endl;
    for(auto i:v){
        cout<<i<<endl;
    }
    cout<<"]"<<endl;
}