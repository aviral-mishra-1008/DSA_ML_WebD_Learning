#include <bits/stdc++.h>
using namespace std;


void strmod(string &str){
    vector<char> v;
    for(int i =0; i<str.length(); i++){
        v.push_back(str[i]);
    }

    str.clear();
    cout<<str<<endl;

    for(auto i: v){
        if(i!=' '){
            str.push_back(i);
        }
        else{
            str.push_back('@');
            str.push_back('4');
            str.push_back('0');
        }
    }
    cout<<str<<endl;
}

void check(string &str, string sub){
    while(str.length()!=0 && str.find(sub)< str.length()){
        str.erase(str.find(sub), sub.length());
    }
}

bool check_per(int arr1[], int arr2[]){
    for(int i=0; i<26; i++){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;
}



bool permut(string str, string per){
    int count1[26] = {0};
    for(int i=0; i<per.length(); i++){
        count1[per[i]-'a']++;
    }

    int i =0;
    int count2[26] = {0};
    while(i<per.length() && i<str.length()){
        count2[str[i]-'a']++;
        i++;
    }

    if(check_per(count1,count2)){
        return 1;
    }

    else{
        while(i<str.length()){
            count2[str[i]-'a']++;
            count2[str[i-per.length()]-'a']--;
            i++;
            if(check_per(count1, count2)){
                return 1;
            }
        }
    }
    return 0;

}

int main(){
    string s = "azxxzy";
    // string sub = "z";
    // removeDuplicates(s);
    cout<<s;
    return 0;
}