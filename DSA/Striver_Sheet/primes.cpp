#include <bits/stdc++.h>
using namespace std;

bool isPrime(int i){
    int count = 0;
    for(int j=2; j<=sqrt(i); j++){
        if(i%j==0){
            count++;

            if(i/j != i){
                count++;
            }
        }

        if(count>2){
            return false;
        }
    }

    return true;
}

vector<int> findPrimes(int N){
    vector<int> ans;
    
    for(int i=1;i<sqrt(N);i++){
        if(){
            if(isPrime(i+1)){
                int val = n/(i+1);
                for(int k=2; k<=val; k++){
                    primes[k*(i+1)-1] = false;
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        if(primes[i]){
            if(n%(i+1)==0){
                ans.push_back(i+1);
            }
        }
    }

    return ans;
}

void print(vector<int> nums){
    for(auto i:nums){
        cout<<i<<",";
    }cout<<endl;
}

int main(){
    int N;
    cin>>N;
    vector<int> v = findPrimes(N);
    print(v);
    return 0;
}