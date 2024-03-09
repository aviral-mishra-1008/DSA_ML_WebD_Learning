#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int min = 0;
        int max = nums[0];
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum+nums[i];
            if(sum>max){    //so we pretty much figured out the Kadane's algorithm ourselves, we tried to maintain a min and a max and whenever sum goes below min we update min and put sum to 0, but this approach has a problem
            //what we do instead is that we remove one step, we compare with 0 and not min and this is so because whenever the sum goes negative for a subarray, its not adding to anything, so it must be dropped, we can maintain the max value and accordingly return it 
            //what's what we've been doing so good!
                max = sum;
            }
            if(sum<0){
                min = sum;
                sum = 0;
            }


            cout<<"sum: "<<sum<<endl;
            cout<<"min: "<<min<<endl;
            cout<<"max: "<<max<<endl<<endl;

        }
        return max;

}

int main(){
    vector<int> nums = {5,4,-1,7,8};
    int n = maxSubArray(nums);
    cout<<n;
    return 0;
}

