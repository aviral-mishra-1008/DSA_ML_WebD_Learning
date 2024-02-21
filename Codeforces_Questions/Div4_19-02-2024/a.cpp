#include <bits/stdc++.h>
using namespace std;

//VLAD => VLADIMIR PUTIN 

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int countA = 0;
        int countB =0;
        for(auto i:s){
            if(i=='A'){
                countA++;
            }
            else{
                countB++;
            }
        }
        if(countA>countB){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }
    return 0;
}