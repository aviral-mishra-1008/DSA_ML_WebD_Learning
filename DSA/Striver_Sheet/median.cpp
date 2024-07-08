#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();

    int low = 0;
    int high = nums1.size()-1;
    int factor = (n+m)/2 - (1-(n+m)%2);

    while(low<=high){
        int mid1 = low+(high-low)/2;
        int mid2 = factor-mid1-1;
        int l1,l2,r1,r2;

        l1 = nums1[mid1];
        l2 = nums2[mid2];

        if(mid1+1<nums1.size()) r1 = nums1[mid1+1];
        else r1 = nums1[mid1];

        if(mid2+1<nums2.size()) r2 = nums2[mid2+1];
        else r2 = nums2[mid2];

        if(l1<=r2 && l2<=r1){
            if((n+m)%2==0){
                double ans = ((double)max(l1,l2) + (double)min(r1,r2))/2.0;
                return ans;
            }

            else{
                double ans = (double)max(l1,l2);
                return ans;
            }
        }

        else if(l1>r2){
            high = mid1-1;
        }

        else{
            low = mid1+1;
        }
    }

    return -1;
}

int main(){
    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};
    double ans = findMedianSortedArrays(nums1,nums2);
    cout<<ans<<endl;
    return 0;
}