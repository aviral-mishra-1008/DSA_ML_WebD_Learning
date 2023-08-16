//Let's see what's switchcase
//concept is quite lucid and format is:
//switch(expression){
// case constant1:   ;  break;
// case constant2:   ;  //constant cannot be string or float 
// default: ;   //here is no case is met then default occurs 
// }

#include <iostream>
using namespace std;

int main(){
    int num = 2;
    char ch = '1';
    switch(ch){
        case 1: cout<< "First"<<endl;
        break;

        case '1': switch(num){
            case 2: cout<<"Hahah!";
            break;

            default: "Hualalal";
        }
        break; //break lagate hain uska matlab yahi hota ki iske aagekuch implement na hona chahiye
    
        default: cout<<"It is default"<<endl;
    }
    return 0;
}
// important!!: infintite loop ke andar switch case ka break uss loop ko break nahi kr dega
// iss case mei exit() use krte
// continue and pass we don't use with switch case
// those can be used only in loop and using here gives error