///Lets solve some leetcode questions!

#include <iostream>
#include <cmath>
using namespace std;

int main(){
//Question 1: Reverse Integer (M)
    // int n;
    // cin>>n;
    // int i =0;
    // int n_num = 0;
    // int INT_MIN = -pow(2,31);
    // int INT_MAX = pow(2,31)-1;
    // while(n!=0){
    //     int digit = n%10;
    //     if(n_num>(INT_MAX/10) || n_num<(INT_MIN/10)){
    //         return 0;
    //     }
    //     else{
    //         n_num = n_num*10+digit;
    //         n = n/10;
    //     }
      
    // }
    // cout<<n_num;


// Question 2: Compliment of decimal number (E)
    int n;
    cin>>n;
    // if(n==0){
    //     cout<<1;
    // }
    // else{
    // //here's a classic method
    //     int antimask = ~n;
    //     while(n!=0){
    //         int x = n>>1;
    //         int z = n|x;
    //         mask = mask|z;
    //         n = n>>1;
    //     }
    //     int leet_answer = mask&antimask;
    //     cout<<leet_answer;
    // }


//Question 3: Power of 2 (E)
    int count = 0;
    while(n!=0){
        if(n&1==1){
            count++;
        } 
        n = n>>1;
    }
    if(count==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
        
}

