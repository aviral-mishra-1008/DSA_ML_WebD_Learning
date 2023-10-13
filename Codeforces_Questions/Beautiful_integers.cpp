#include <bits/stdc++.h>
using namespace std;

int main(){
    int s;
    vector<int> v;
    for(int i=1; i<=15; i++){
        v.push_back(i);
    }

    int i =i;
    int n =15;
    while(v[i]<=n){
        cout<<v[i]<<endl;
        v.erase(v.begin()+i);
        i++;
    return 0;
 }
}