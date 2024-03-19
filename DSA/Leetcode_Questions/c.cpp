#include <bits/stdc++.h>
using namespace std;


    
void findPossible(vector<string> &arr, set<string> &substr, int i, string ans){
    
    if(i==arr.size()-1){
        substr.insert(ans);
        return
    }
    
}


int main(){

    vector<string> arr = {"cab","ad","bad","c"};
    set<string> substrr;
    for(auto i:arr){
        for(int j = 1; j<=i.size();j++){
            for(int k=j-1; k<i.size(); k++){
                string s = i.substr(k, j);
                cout<<"current str: "<<s<<endl;
                substrr.insert(s);
            }
        }
    }
    for(auto i:substrr){
        cout<<i<<endl;
    }
    return 0;
}
