#include <bits/stdc++.h>
using namespace std;

int lenstr(char ch[]){
    int count = 0;
    int i = 0;
    while(ch[i]!='/0'){
        count++;
        i++;
    }
    return count;
}

int main(){
    string x = "Aviral"; //so string datatype is nothing but a one dimentional array of char data type and that's how its implemented in backend basically
    //1D Char array = string
    //Character se hum kuch nahi kar skte, we use string to make sentences and statements
    cout<<x[1];

    //making a char array
    char ch[20];
    cin>> ch;
    cout<< ch; //refer to notes!


    //FINDING LENGTH OF STRING
    //So when passing character array we are actually not always required to pass the length 
    //because we can find the length by using a loop and iterating till we don't find a /0 or null character

    cout<<lenstr(ch);

    return 0;
}