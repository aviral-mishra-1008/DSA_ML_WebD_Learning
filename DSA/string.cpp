#include <bits/stdc++.h>
#include <windows.h>

using namespace std;
//mostly on website called cplusplus.com  you can get information about various things related to strings 
//string is the same implementation of the very thing that we did in char arrays
//string however doesn't allow access to \0 in the string but ofc it is ending with \0 only 
//various functions related to string is given:

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Your GUI application code here
    return 0;
}

int main(){
    string s;
    cin>>s;
    cout<<s<<endl; 

    //length can be found using length function
    int x = s.length();
    //you can add elements as well
    s.push_back('M'); //only one char
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl; 

    //many functions are used
    //max_size returns the maximum size of string
    // resize is the function that can resize the string

    cout<<"size is: "<<s.size()<<endl<<" Maximum possible size is: "<<s.max_size()<<endl;

    //resize
    s.resize(5); //so when size it less it reduces the size to the specified number
    cout<<s<<" The size is : "<<s.size()<<endl;

    s.resize(12);
    cout<<s<<" The size is: "<<s.size()<<endl; //this adds extra space for new elements into the size of string 

    s.resize(5); //so when size it less it reduces the size to the specified number
    s.resize(12, 'C'); //this adds element we mention "char" into the last of the string 

    cout<<s<<endl;

    //capacity, empty to clear it all and 

    //push_back and pop_back you know
    //append adds ANOTHER STRING into a string 

    string str;
    string str1 = "Hello! ";
    string str2 = "Hola Amigos!"; //*****VERY IMPORTANT THING


    str.append(str1);
    cout<<str<<endl;
    str.append(" ");
    str.append(str2);
    cout<<str<<endl;


    //Insert 
    //Used To Insert element at desired location
    

    str.insert(7,"A" );//REMEMBER ITS (<INT>, <STRING>)
    cout<<str<<endl;

    //REPLACE is another magical tool like python's replace

    str.replace(3, 7, "Tyler"); //(position, length of string to replace, string that needs to be inserted)
    cout<<str<<endl; //So string gets a replacement 



    //ERASE REMOVES ELEMENT FROM A SPECIFIED POSITION WHILE INSERT ADDS AT SPECIFIED LOCATION IN BOTH VECTOR OR STRINGS


    //TO TAKE IN AN ENTIRE LINE BY CIN WE USE GETLINE OPERATOR!!

    return 0;
}