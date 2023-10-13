#include <bits/stdc++.h>
using namespace std;

string reverse_w(string s){
    string x = s;
    int st = 0;
    for(int i=0; i<=x.size(); i++){
        int e = i;
        if(x[i]!=' ' && i!=x.size()-1){
            continue;
        }

        else if(x[i]==' '){
            while(st<e){
                swap(x[st],x[e-1]);
                e--;
                st++;
            }
            st = i+1;
            continue;
        }

        else{
            while(st<e){
                swap(x[st],x[e]);
                st++;
                e--;
            }
        }
    }    
    return x;
}

int main(){
    string s = "My Name is love";
    string x = reverse_w(s);
    cout<<x;
    return 0;
}