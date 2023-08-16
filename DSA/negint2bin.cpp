#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"Enter number: ";
    int n;
    cin>>n;
    int num = n-2*n;
    // cout<<endl<<num;
    int bina = 0;
    int i=0;
    while(num!=0){
        int rem;
        int g = num%2;
        if(g==0){
            rem = 0;
        }
        else if(g==1){
            rem=1;
        }
        cout<<"Value of i: "<<i<<endl;
        cout<<"Value of remainder: "<<rem<<endl;
        int t = pow(10,i)*rem;
        cout<<"Value of binary: "<<bina<<endl;
        cout<<"Value of pow function: "<<t<<endl;
        bina = bina+t;
        cout<<"Updated Value of binary: "<<bina<<endl;
        num = num>>1;
        i++;
    }
    cout<<bina;
    return 0;
}