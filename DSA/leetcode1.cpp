#include <iostream>
using namespace std;


int main(){
    int n = 234;
    int sum = 0;
    int product = 1;
    for(int i=0; i<3; i++){
        int x = n%10;
        sum = x+sum;
        n = n/10;
    }
    

    for(int j=1; j<3; j++){
        int x = n%10;
        product = x*product;
        n = n/10;
    }
    cout<<"Sum is: "<<sum<<" "<<"Product is: "<<product;

    return 0;
}