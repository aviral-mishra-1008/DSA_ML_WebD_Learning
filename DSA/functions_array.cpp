#include <iostream>
#include <limits.h>
using namespace std;

int Max(int num[], int n){
    int max  = INT_MIN;

    for(int i=0; i<n; i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}

int Min(int num[], int n){
    int min  = INT_MAX;

    for(int i=0; i<n; i++){
        if(num[i]<min){
            min = num[i];
        }
    }
    return min;
}

int main(){
    int size;
    cin>> size;
    // int num[size]; //This is not a good practice...never use this method to place variable in array[size]..size must be always deterministic
    int num[100]; //better method, bhale 10 input lena ho aur jyada ka bana do lekin kabhi bhi upar wala method use nahi krna 
    for(int i=0; i<size; i++){
        cout<<"Enter number: ";
        cin>>num[i];
    }
    return 0;
}

//Maximum and minimum ke liye ek function hota max(var1, var2) so it returns the variable that has more length!
//Same goes for min(var1, var2)

