#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    int count =0;
    for(int i=1; i<a; i++){
        if(a%i==0){
            count++;
        }
    }
    if(count>1){
        return false;
    }

    else{
        return true;
    }
}

int main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    bool done = false;
    for(int i=1; i<num; i++){
        int num2 = num-i;
        bool x = isPrime(num2);
        bool y = isPrime(i);
        if(x && y){
            cout<<"Yes it can be expressed as sum of: "<<i<<" and "<<num2<<" and both are primes!"<<endl;
            done = true;
            break;
        }
    }
    if(done == false){
        cout<<"No It Cannot Be Expressed By Sum of 2 primes";
    }

    return 0;
}