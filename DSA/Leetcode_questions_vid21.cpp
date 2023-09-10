#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> v, int n){
    int i = 0;
    int j = n-1;
    int ans =0;
    while(i<n){
        ans = ans+v[i]*pow(10,j);
        j--;
        i++;
    }
    if(n%2==0){
        return ans;
    }
    else{
        return ans+1;
    }
}

void reverse(vector<int> &c){
    int s = 0;
	int n = c.size();
    cout<<n<<endl;
    int e = n-1;
    while(s<=e){
        swap(c[s], c[e]);
        s++;
        e--;
    }
}

vector<int> numVec(int num){
    vector<int> v;
    while(num!=0){
        int x = num%10;
        v.push_back(x);
        num = num/10;
    }
    return v;
}



int main(){
    vector<int> rt;
    rt.push_back(3);
    rt.push_back(4);
    rt.push_back(5);

    vector<int> ct;
    ct.push_back(4);
    ct.push_back(5);
    ct.push_back(1);

    int x = sum(rt,3);
    int y = sum(ct,3);
    int s = x+y;
    vector<int> d = numVec(s);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<s<<endl;
    reverse(d);
    for(auto i: d){
        cout<<i<<" ";
    }
    return 0;
}