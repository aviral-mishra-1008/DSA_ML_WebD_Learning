#include <bits/stdc++.h>
using namespace std;



int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
    sort(capacity.begin(),capacity.end());
    int sum = 0;
    for(auto i:apple){
        sum+=i;
    }
    
    int count = 0;
    int checkSum = 0;
    int iter = capacity.size()-1;
    while(iter>=0){
        checkSum+=capacity[iter];
        count++;
        iter--;
        if(checkSum>=sum){
            return count;
        } 
    }    
    return -1;
}


int main(){
    vector<int> apple = {5,5,6};
    vector<int> capacity = {2,4,2,7};
    int count = minimumBoxes(apple,capacity);
    cout<<count<<endl;
    return 0;
}