#include <iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i=0; i<b; i++){
        ans = ans*a;
    }
   return ans;


}

//Function Signature
int fact(int n){
    //Function Body
    int ans = 1;
    for(int i = 1; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}


//1 means prime and 0 means not a prime 

bool isPrime(int a){
    for(int i = 2; i<a; i++){
        if(a%i==0){
            return 0;
            break;
        }

        else{
            return 1;
        }

    }
}

int main(){
    int n;
    cout<<"Please enter the number: ";
    cin>>n;
    // cout<<endl;
    // cout<<"Please enter the r value: ";
    // int m;
    // cin>>m;
    // // cout<<endl;
    // // int x  = power(n,m);
    // // cout<<"Answer is : "<<x;
    // int x = n-m;

    // //Function Call
    // int soln = fact(m)*fact(x);
    // int soln1 = fact(n)/soln;
    // cout<<soln<<"  "<<fact(n)<<"  "<<soln1;
    bool x = isPrime(n);
    if(x==0){
        cout<<"is not a prime number";
    }

    else if(x==1){
        cout<<"is prime number";
    }
    return 0;
}



//Function call stack!
//Refer notes