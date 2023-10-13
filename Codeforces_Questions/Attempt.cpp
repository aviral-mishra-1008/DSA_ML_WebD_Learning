#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> h){
    int sum =0;
    for(auto i:h){
        sum = sum+i;
    }
    return sum;
}

int isBeautiful(int s){
    if(s==1){
        return 1;
    }

    else{ 
    vector<int> v;
    v.push_back(1);
    int i=0;
    int size = 1;
    while(true){
        int sumation = 0;
        v.push_back(v[i]+2);
        i++;
        int sr = sum(v);
        sumation = sumation + sr;
        size++;
        if(sumation<s){
    }
        else{
            break;
        }
        }
    return size;
    }

}



int main(){
    int n;
    cin>>n;
    int i =0;
    while(i!=n){
        int s;
        cin>>s;
        int len = isBeautiful(s);
        cout<<len<<endl;
        i++;
    }
 
    return 0;
}