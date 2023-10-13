#include <bits/stdc++.h>
using namespace std;

char lower(char u){
    if(u>='a' && u<='z'){
        return u;
    }

    else{
        u = u-'A'+'a';
        return u;
    }
}

bool isAlnum(char ch){
    if(ch>='0' && ch<='9' || ch>='A' && ch<='z'){
        return true;
    }

    else{
        return false;
    }
} 

int lenstr(char ch[]){
    int count = 0;
    int i = 0;
    while(ch[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

void reverse(char arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s++], arr[e--]);
    }
}

bool Palindrome(char arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        char x = arr[s];
        char y = arr[e];
        bool check_s = isAlnum(x);
        bool check_e = isAlnum(y);
        if(check_s==false){
            s++;
            continue;
        }

        if(check_e==false){
            e--;
            cout<<"chala hun"<<endl;
            continue;
        }

        x = lower(x);
        y = lower(y);

        cout<<x<<" start: "<<s<<"  "<<" end: "<<e<<" "<<y<<"  "<<check_e<<endl;
        if(x!=y){
            return false;
            // cout<<"Yes"<<endl;
            break;
        }
        
        else{
            s++;
            e--;
            continue;
        }
        
        // cout<<"Value of s is: "<<s<<"Value of e is: "<<e<<endl;
    }
    return true;

}



int main(){
    string x = "Aviral"; //so string datatype is nothing but a one dimentional array of char data type and that's how its implemented in backend basically
    //1D Char array = string
    //Character se hum kuch nahi kar skte, we use string to make sentences and statements
    // cout<<x[1];

    //making a char array
    char ch[20];
    cin>> ch;
    // cout<< ch<<endl; //refer to notes!


    //FINDING LENGTH OF STRING
    //So when passing character array we are actually not always required to pass the length 
    //because we can find the length by using a loop and iterating till we don't find a /0 or null character

    // cout<<lenstr(ch)<<endl;

    // reverse(ch,5);
    // cout<<ch<<endl;
    bool pali = Palindrome(ch,4);
    cout<<pali<<endl;
    return 0;
}