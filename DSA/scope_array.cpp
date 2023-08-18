#include <iostream>
using namespace std;

void update(int arr[], int n){
    cout<< "Inside Function"<<endl;
    for(int i = 0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl<<"Leaving function"<<endl;
}

int main(){
    int arr[3] = {1,2,3};
    arr[2] = 120;
    update(arr, 3); //mtlb sara operation humesha array per hota hai na ki uski ek copy pe 
    for(int i = 0; i<3; i++){  //variable ke case mei jab hum dete hain, function mei to uski copy ban jati but array ke case mei kya hota na ki memory address jata hai to original location pe humesha change aa jata!
        cout<< arr[i]<<" ";
    }
    return 0;
}