#include <bits/stdc++.h>
using namespace std;

char lower(char x){
    if(x>='a' && x<='z'){
            return x;
        }

        else if(x>='A' && x<='Z'){
            x = x-'A'+'a';
            return x;
        }
    }

int max_ind(int arr[]){
    int position = 0;
    int max = 0;
    for(int i=0; i<26; i++){
        if(arr[i]>max){
            max = arr[i];
            position = i;
        }
    }
    return position;
}
char max_occur(string s){
    int arr[26] = {0};
    for(auto i: s){
        char x = lower(i);
        int place = x-'a';
        arr[place] = arr[place]+1;
    }
   
    int y = max_ind(arr);
    char ans = y+'a';
    return ans;
}

int main(){
    string s = "aaaaa";
    char ans  = max_occur(s);
    cout<<ans;
    return 0;
}