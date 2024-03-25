#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> &a, long long k) {
    int length = 0;
    int pre = 0;
    int nxt = 0;

    while(nxt<a.size()){
        int sum = 0;
        int len = 0;
        while(sum<k){
            sum = sum+a[nxt];
            len++;
            if(sum==k){
                length = max(length, len);
                if(nxt+1<a.size() && a[nxt+1]==0){
                    nxt++;
                    while(a[nxt]==0){
                        length++;
                        nxt++;
                    }
                    pre = nxt;
                    continue;
                }
            }
            nxt++;
        }
        pre++;
        nxt = pre;
    }

    return length;
}
int main(){
    vector<int> a = {1,2,17,0,1};
    int len = longestSubarrayWithSumK(a,17);
    cout<<len<<endl;
    return 0;
}