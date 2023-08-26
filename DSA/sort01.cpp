#include <iostream>
using namespace std;

void print(int arr[], int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

void Sort10(int arr[],int n){
    //    sort(arr.begin(),arr.end());
//     int i = 0;
//     int j = n-1;

//     while(i<=j){
//         if(arr[i]==0){
//             i++;
//         }

//         else if(arr[j]==1){
//             j--;
//         }

//         else if(arr[i]==1 && arr[j]==0){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }

//         else{
//             continue;
//         }
//     }
//     while(k<=)
// }     
}


void sort012(int arr[], int n){
    int i=0, j=n-1;
    while(i<=j){
        if(arr[i]==0 && arr[j]==2){
            i++;
        }

        else if(arr[i] == 0 && arr[j]==1){
            i++;
        }

        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i], arr[j]);
            i++;
        }

        else if(arr[i]==2 && arr[j]==0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

        else if(arr[i]==2 && arr[j]==2){
            j--;
        }

        else if(arr[i]==1 && arr[j]==1){
            i++;
        }

        else if(arr[i]==2 && arr[j]==1){
            swap(arr[i], arr[j]);
            j--;
        }

        else if (arr[i]==1 && arr[j]==2){
            j--;
        }

        else if(arr[i]=0 && arr[j]==0){
            i++;
        }


    }
}
int main(){
    int arr1[8] = {0,1,1,2,1,1,2,0};
    sort012(arr1,8);
    print(arr1,8);
    return 0;
}