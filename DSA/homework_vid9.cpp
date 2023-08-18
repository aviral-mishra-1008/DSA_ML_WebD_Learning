#include <iostream>
#include <cmath>
using namespace std;

int AP(int x){
    return (3*x)+7;
}

int bitbin(int y){
    int ans=0;
    while(y!=0){
        int rem = y%2;
        if(rem==1){
            ans++;
        }
        y = y>>1;
    }
    return ans;
}


int setbit(int a, int b){
    int count;
    int bin1 = bitbin(a);
    int bin2 = bitbin(b);
    count = bin1 + bin2;
    return count;
}


int fib(int z){
    int ans = 0;
    ans = fib(z-1) + fib(z-2);
    cout<<ans;
}

int main(){
    int n;
    cout<<"Enter first number: ";
    cin>>n;
    // int m;
    // cout<<"Enter second number: ";
    // cin>>m;
    fib(n);
    return 0;

}