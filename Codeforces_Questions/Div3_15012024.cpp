#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int f;
        cin>>f;
        long long int a;
        cin>>a;
        long long int b;
        cin>>b;
        vector<long long int> moments;
        moments.push_back(0);
        for(int i=0; i<n; i++){
            long long int top = moments.size()-1;
            long long int m;
            cin>>m;
            moments.push_back(m);
            if(a*(m-moments[top])>b){
                f = f-b;
            }
            else{
                f = f-(a*(m-moments[top]));
            }
            if(f<=0){
                cout<<"NO"<<endl;
                break;
            }

    }
    if(f>0){
        cout<<"YES"<<endl;
    }
}
    return 0;
}