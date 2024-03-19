#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> &a, long long k) {
    int length = 0;
    int sum = 0;
    int lencheck = length;
    int iCheck = 0;
    for(int i=0; i<a.size(); i++){
        sum+=a[i];
        length++;

        if(sum==k){
            lencheck = max(length,lencheck);
            if(i<a.size()-1 && a[i+1]!=0){
                sum = 0;
                length = 0;
            }
            iCheck = i;
        }
        if(sum>k){
            length = 0;
            sum = 0;
            i = iCheck;
            iCheck++;
      }
    }
    return lencheck;
}

int main(){
    vector<int> a = {4,5,17,0,4};
    int longest = longestSubarrayWithSumK(a,17);
    cout<<longest<<endl;
    return 0;
}
