#include <bits/stdc++.h>
using namespace std;

int minimumMax(vector<int> &a) {
    int mini = INT_MAX;
    sort(a.begin(),a.end());
    int n = a[a.size()-1];
    int count = 0;
    while(n!=0){
        count++;
        n = n/2;
    }
    int key = pow(2,count);

    a.push_back(0);
    a.push_back(key);

    for(int i = 0; i<=key; i++){
        int maxi = INT_MIN;
        for(auto j:a){
            int k = j^i;
            maxi = max(maxi,k);
        }
        mini = min(mini,maxi);
    }


    return mini;
}

int main(){
    vector<int> a = {3,3,3,3};
    int min = minimumMax(a);
    cout<<"min: "<<min<<endl;
    return 0;
}