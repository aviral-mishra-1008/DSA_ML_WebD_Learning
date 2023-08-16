#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please tell how much is amount: ";
    cin>>n;
    cout<<"You will need"<<endl;
    int count100 = n/100;
    switch(count100){
        case 0: break;

        default: cout<<count100<<" Notes of 100 are required"<<endl;
        n = n-100*count100;
    }

    int count50 = n/50;
    switch(count50){
        case 0: break;

        default: cout<<count50<<" Notes of 50 are required"<<endl;
        n = n-count50*50;
    }

     int count20 = n/20;
    switch(count20){
        case 0: break;

        default: cout<<count20<<" Notes of 20 are required"<<endl;
        n = n-count20*20;
    }

    switch(n){
        case 0: break;

        default: cout<<n<<" Notes of 1 are required"<<endl;
   
    }


    return 0;
}