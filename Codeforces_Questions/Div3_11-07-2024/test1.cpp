// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int findSol(int m, int n,  vector<int>& horizontalCut, vector<int>& verticalCut, int v, int h, int cuts, int cost){
    if(cuts==0){
        return cost;
    }
    int ans = INT_MAX;
    int rem = (m-1-h)+(n-1-v);
    if(v<n-1 && cuts/rem>1) ans = min(ans,findSol(m,n,horizontalCut,verticalCut,v,h,cuts-1,cost+verticalCut[v])); 
    else if(v<n-1 && cuts/rem<=1) ans = min(ans,findSol(m,n,horizontalCut,verticalCut,v+1,h,cuts-1,cost+verticalCut[v]));

    if(h<m-1 && cuts/rem>1) ans = min(ans,findSol(m,n,horizontalCut,verticalCut,v,h,cuts-1,cost+horizontalCut[h]));
    else if(h<m-1 && cuts/rem<=1) ans = min(ans,findSol(m,n,horizontalCut,verticalCut,v,h+1,cuts-1,cost+horizontalCut[h]));

    return ans;
}

int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
    return findSol(m,n,horizontalCut,verticalCut,0,0,m*n-1,0);
}
    
int main(){
    vector<int> horizontalCut = {1,3};
    vector<int> verticalCut = {5};

    int ans = minimumCost(3,2,horizontalCut,verticalCut);
    cout<<ans<<endl;
    return 0;
}