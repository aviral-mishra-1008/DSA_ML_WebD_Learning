//let's try to find the square root using binary search
#include <bits/stdc++.h>
using namespace std;

int sqrt(int n){
    int s = 0;
    int e = n;
    int mid = s+(e-s)/2;
    int ans =0;
    while(s<e){
        if(mid*mid>n){
            e = mid-1;
        }

        else if(mid*mid<n){
            ans = mid;
            s = mid+1;
        }

        else if(mid*mid==n){
            ans = mid;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

double precise(int n, int val, int precision){
    double factor = 1; //we define a factor to change precision to 1/10 ....1/100....1/1000 etc.
    double ans = val;
    for(int i =0; i<precision; i++){
        factor = factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
        }

    }
    return ans;
}

int main(){
    int x = sqrt(3);
    double anst = precise(113,x,9);
    cout<<anst;
    return 0;
}

