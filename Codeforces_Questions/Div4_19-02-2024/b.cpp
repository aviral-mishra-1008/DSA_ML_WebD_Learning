#include <bits/stdc++.h>
using namespace std;
//VLAD => VLADIMIR PUTIN 

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> mat;
        for(int i=0; i<n; i++){
            string str;
            cin>>str;
            mat.push_back(str);
        }

        int check = 0;
        for(int i=0;i<n;i++){
            int count1 = 0;
            for(int j=0;j<n;j++){
                if(mat[i][j]=='1'){
                    count1++;
                }
            }
            if(count1>0 && check>0){
                if(count1==check){
                    cout<<"SQUARE"<<endl;
                    break;
                }
                else{
                    cout<<"TRIANGLE"<<endl;
                    break;
                }
            }
            if(count1>0 && check==0){
                check = count1;
            }
        }
}
}