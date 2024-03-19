#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for(int i=0;i<n;i++){
            if(i+2<n && (s[i]=='m' && s[i+1]=='a' && s[i+2]=='p') || (s[i]=='p' && s[i+1]=='i' && s[i+2]=='e')){
                count++;
                i+=2;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
