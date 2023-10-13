#include <bits/stdc++.h>
using namespace std;

int interest(int inp){
    if(inp%10==0){
        cout<<inp/10<<endl;
    }
    else{
        int y = inp+1;
        cout<<y/10<<endl;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int inp;
        cin>>inp;
        interest(inp);
        i++;
    }
    
    return 0;
}