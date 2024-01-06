#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;  
        vector<int> arr1;
        vector<int> arr2;
        for(int i=0; i<n; i++){
            if(s[i]=='+'){
                arr1.push_back(1);
            }
            else{
                arr2.push_back(-1);
            }
        }

        int size1 = arr1.size();
        int size2 = arr2.size();
        int i = 0;
        int j = 0;
        while(i<size1 && j<size2){
            arr1.pop_back();
            arr2.pop_back();
            i++;
            j++;
        }
        
        if(arr1.size()!=0){
            cout<<arr1.size()<<endl;
        }
        else{
            cout<<arr2.size()<<endl;
        }
    }
    return 0;
}