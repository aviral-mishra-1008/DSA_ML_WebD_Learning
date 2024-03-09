#include <bits/stdc++.h>
#define modulo 1000000007
using namespace std;

long long recurPow(long long x, long long n){
    long long ans = 1;
    if(n==0){
        return ans;
    }
    if(n%2==0){
        x = x*x;
        x = x%modulo;
        ans = recurPow(x,n/2);
    }
    else{
        ans = x*recurPow(x,n-1);
        ans = ans%modulo;
    }
    return ans;
}

int countGoodNumbers(long long n) {
    long long even = n/2;
    long long odd = n/2 + n%2;
    long long soln1 = (recurPow(5,odd)*recurPow(4,even))%modulo;

    return soln1;
}

int main(){
    long long n = 806166225460393;
    long long check = countGoodNumbers(n);
    cout<<check<<endl;
    return 0;
}

