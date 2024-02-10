#include <bits/stdc++.h>
using namespace std;


void atoi(string s, vector<int> &num, int ind, int full){
    if(s[ind]<'0' || s[ind]>'9' || ind==full){
        return;
    }
    int n = s[ind]-'0';
    num.push_back(n);
    atoi(s,num,ind+1,full);
}

int myAtoi(string s) {
    bool start = true;
    int n = s.size();
    int valueCheck = 1;
    bool flag = false;
    int ind = 0;
    while(s[ind]==' '){
        ind++;
    if(ind==n-1){
        return 0;
      }
    }

    while(s[ind]=='0'){
        ind++;
        if(ind==n-1){
            return 0;
        }
    }

    if(s[ind]=='-'){
        int grind = ind-1;
        if(s[grind]=='0'){
            return 0;
        }
        ind++;
        if(s[ind]>='0'&&s[ind]<='9'){
            flag = true;
            valueCheck = -1;
        }
        else{
            return 0;
        }
    }
    else if(s[ind]>'0' && s[ind]<='9'){
        flag = true;
    }
    else{
        return 0;
    }


    if(flag){
        vector<int> num;
        atoi(s,num,ind,n);
        long long check = 0;
        int count = num.size();
        if(count>10){
            if(valueCheck==-1){
                return INT_MIN;
            }
            else{
                return INT_MAX;
            }
        }
        count--;
        for(auto i: num){
        check = check+(i*(ceil(pow(10,count--))));
        if(valueCheck==-1){
            if(check*valueCheck<=INT_MIN){
                check = INT_MIN;
                return check;
            }
        }
        else{
            if(check>=INT_MAX){
                check = INT_MAX;
                return check;
            }
        }
      }
    return check*valueCheck;
    }
    
    else{
        return 0;
    }
    }

int main(){
    string s = "+1";
    int ne = myAtoi(s);
    cout<<"Answer: "<<ne<<endl;
    return 0;
}




