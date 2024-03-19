#include <bits/stdc++.h>
using namespace std;


long long maximumHappinessSum(vector<int>& happiness, int k) {
    sort(happiness.begin(),happiness.end());
    long long iter = 0;
    long long sum = 0;
    for(long long i=happiness.size()-1; i>=happiness.size()-k;i--){
        long long x;
        if((happiness[i]-iter)>=0){
            x = happiness[i]-iter;
        }
        else{
            x = happiness[i];
        }
        sum = sum+x;
        iter++;
    }
    return sum;
}


int main(){
    vector<int> happiness = {2,83,62};
    int k = 3;
    int count = maximumHappinessSum(happiness,k);
    cout<<count<<endl;
    return 0;
}