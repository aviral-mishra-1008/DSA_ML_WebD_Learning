#include <bits/stdc++.h>
using namespace std;

bool Lucky(int n){
    vector<int> v;
    for(int i=1; i<=n; i++){
        v.push_back(i);
    }
    int count = 0;
    int j = 1;
    int i = j;

    while(v[v.size()-1]==n){
    if(count == v.size()){
        return true;
        break;
    }
    else{
        while(v[i]<=n){
            cout<<"Removing "<<v[3]<<" for i value : "<<i<<endl;
            v.erase(v.begin()+i);
            i = i+j;
            count++;
    }
        j++;
    }
  }
  return false;
}

int main(){

    bool check = Lucky(15);
    return 0;
}