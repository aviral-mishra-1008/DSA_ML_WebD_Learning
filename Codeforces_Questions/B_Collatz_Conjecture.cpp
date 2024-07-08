#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x;
        cin>>y;
        cin>>k;

        for(int i=0; i<k; i++){
            x+=1;
            while(x%y==0){
                int factor = x/y;
                factor--;
                while(x%(factor*y)!=0){
                    factor--;
                }
                x = x/(y*factor);
            }
        }

        cout<<x<<endl;
    }
    return 0;
}