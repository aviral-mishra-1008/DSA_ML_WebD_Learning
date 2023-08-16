#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 0;
    int deci = 0;
    while(n!=0){
        int x = n%10;
        n = n/10;
        deci = deci + pow(2,i)*x;
        i++;
    }
    cout<<deci;
    return 0;
}