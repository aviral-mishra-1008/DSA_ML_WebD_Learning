#include <bits/stdc++.h>
using namespace std;

double powpow(double x, int n){
    double ans = x;
    if(n==1 || n==-1){
        return ans;
    }

    if(n<0){
        ans = ans*powpow(x,n+1);
    }
    else{
        cout<<ans<<"n: "<<n<<endl;
        ans = ans*powpow(x,n-1);
    }
    return ans;
}

double myPow(double x, int n) {
    double ans = powpow(x,n);
    if(n<0){
        return 1/ans;
    }
    else{return ans;}
}

int main(){
    double ans = myPow(0.0001,2001000);
    cout<<ans;
    return 0;
}