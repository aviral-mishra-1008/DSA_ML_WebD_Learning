#include <bits/stdc++.h>
using namespace std;


int findSol(int a, int b, int c, int ind, int mul){

    if(ind==5){
        return mul; 
    }

    int one = findSol(a+1,b,c,ind+1,(a+1)*b*c);
    int two = findSol(a,b+1,c,ind+1,a*(b+1)*c);
    int three = findSol(a,b,c+1,ind+1,a*b*(c+1));

    return max(one,max(two,three));

}

int main(){
    int t;
    cin>>t;
    while(t--){        
        int a,b,c;
        cin>>a>>b>>c;
        cout<<findSol(a,b,c,0,0)<<endl;
    }
    return 0;
}