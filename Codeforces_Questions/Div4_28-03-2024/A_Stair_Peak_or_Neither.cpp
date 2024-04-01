#include <bits/stdc++.h>
using namespace std;


void print(int a, int b, int c){
    if(a>=b){
        cout<<"NONE"<<endl;
        return;
    }

    if(b<c){
        cout<<"STAIR"<<endl;
        return;
    }

    else if(b>c){
        cout<<"PEAK"<<endl;
        return;
    }

    cout<<"NONE"<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        int b;
        int c;

        cin>>a;
        cin>>b;
        cin>>c;

        print(a,b,c);
    }
    return 0;
}