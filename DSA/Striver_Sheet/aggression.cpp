#include <bits/stdc++.h>
using namespace std;


int findlow(vector<int> &nums){
	int ans = INT_MAX;
	
	for(int i=1; i<nums.size(); i++){
		ans = min(ans,nums[i]-nums[i-1]);
	}
	
	return ans;
}

bool isPossible(vector<int> &nums, int mid, int c){
	int chance = nums[0];
	c--;
	
	for(int i=1; i<nums.size(); i++){
		if(nums[i]-chance>=mid){
			c--;
			chance = nums[i];
		}
	}
	
	if(c<=0){
		return true;
	}
	
	return false;
}


int main(){
	int t;
	cin>>t;

	while(t--){
		int n,c;
		cin>>n;
		cin>>c;
		
		vector<int> nums;
		for(int i=0; i<n; i++){
			int x;
			cin>>x;
			nums.push_back(x);
		}
		
		sort(nums.begin(),nums.end());
		int high = nums[nums.size()-1]-nums[0];
		int low = findlow(nums);
        int ans = 0;
        cout<<low<<","<<high<<endl;
		while(low<=high){
			
			int mid = low+(high-low)/2;
			if(isPossible(nums,mid,c)){
				low = mid+1;
                ans = mid;
                cout<<low<<","<<mid<<","<<high<<endl;
			}
			
			else{
				high = mid-1;
                cout<<low<<","<<mid<<","<<high<<endl;
			}
		}
		
		cout<<ans<<endl;
	}

	return 0;
}