#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        int k;
        cin>>n;
        cin>>m;
        cin>>k;

        vector<int> c1;
        vector<int> c2;
        for(int i=0; i<n;i++){
            int x;
            cin>>x;
            if(x<=k){
                c1.push_back(x);
            }
        }

        for(int j=0; j<m; j++){
            int y;
            cin>>y;
            if(y<=k){
                c2.push_back(y);
            }
        }

        sort(c1.begin(),c1.end());
        sort(c2.begin(),c2.end());

        int sum = 0;
        for(int i=0;i<c1.size();i++){
            int check = c1[i];
            for(int j=0; j<c2.size(); j++){
                if((check+c2[j])<=k){
                    sum++;
                }
            }
        }
        cout<<"answer: "<<sum<<endl;
    }
    
    return 0;
}