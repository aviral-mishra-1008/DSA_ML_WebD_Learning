#include <bits/stdc++.h>
using namespace std;

void subFind(vector<int> &v, vector<int> &nums, int n, int sum, int i){
    if(i==n){
        v.push_back(sum);
        return;
    }
    subFind(v,nums,n,sum+nums[i],i+1); //never use i++ for increament in such recursive calls 
    //so here's the crux, whenever we pass a variable by reference as in, we pass a vector<int> &nums [], then every addition occurs onto it and we need to remove elements as we move back, but when we pass not by reference then in that case we actually do not need to care about the value updation, its like this say in first call the value of i was 1 then it became 2 in next call so basically, when function call returns it will revert back i to its own previous value, say i was = 2 then function completed and returned so the previous function call will still have value of i=1 because then i in next call was a deepcopy with value i = i+1
    subFind(v,nums,n,sum,i+1);
}

int main(){
    vector<int> nums = {1,2,3};
    int n = nums.size();
    vector<int> v;
    subFind(v,nums,n,0,0);
    for(auto i:v){
        cout<<i;
    }cout<<endl;
    return 0;
}