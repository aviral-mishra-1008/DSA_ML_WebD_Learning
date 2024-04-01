#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> possibilities = {10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 100000};
        int n;
        cin>>n;

        if(n==0 || n==1){
            cout<<"YES"<<endl;
            continue;
        }

        int count1 = 0;
        int check = n;
        int count = 0;
        while(check>0){
            count++;
            int x = check%10;
            if(x==1 || x==0){
                count1++;
            }
            check = check/10;
        }

        if(count==count1){
            cout<<"YES"<<endl;
            continue;
        }

        while(n>1){
            bool found = false;
            for(auto i:possibilities){
                if(n%i==0){
                    n = n/i;
                    found = true;
                }
            }
            if(found!=true){
                cout<<"NO"<<endl;
                break;
            }
        }
        if(n==1){
            cout<<"YES"<<endl;
        }
}
    return 0;
}