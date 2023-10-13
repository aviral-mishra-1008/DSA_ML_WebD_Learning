#include <bits/stdc++.h>
using namespace std;

void print(vector<char> arr, int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

void print_arr(int arr[], int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}




int compress(vector<char>& chars) {
    string s;
    chars.push_back('0');
    int count = 1;
    for(int i = 0; i<chars.size()-1; i++){
        if(chars[i]==chars[i+1]){
            count++;
        }
        else{
            s.push_back(chars[i]);
            if(count!=1){
            stack<int> n;
            while(count!=0){
                int val = count%10;
                n.push(val);
                count = count/10;
            }

            int c = n.size();
            for(int i = 0; i<c; i++){
                char x = n.top() + 48;
                s.push_back(x);
                n.pop();
            }
            }
            count = 1;
        }
    }

    cout<<s;
    // for(int i = 0; i<chars.size(); i++){
    //     count[chars[i]-'a']++;
    // }
    // for(int i=0; i<26; i++){
    //     if(count[i]!=0){
    //         char ch = i+'a';
    //         s.push_back(ch);
    //         int val = count[i];
    //         if(val==1){
    //             continue;
    //         }

    //         else{
    //         stack<int> n;
    //         while(val!=0){
    //             int val2 = val%10;
    //             n.push(val2);
    //             val = val/10;
    //         }
    //         int c = n.size();
    //         for(int i = 0; i<c; i++){

    //             char x = n.top() + 48;
    //             s.push_back(x);
    //             n.pop();
    //         }
    //         }
    //     }
    // }
    chars.clear();
    for(int j=0; j<s.length(); j++){
        chars.push_back(s[j]);
    }  
    // cout<<s;
    int num = chars.size();

    return num;  
}

int main(){
    vector<char> chars = {'a','a','b','b','b','a','a'};
    compress(chars);
    return 0;
}