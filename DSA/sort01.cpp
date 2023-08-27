#include <bits/stdc++.h>
using namespace std;

void print(vector<int> a, int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"]";
}

// void Sort10(int arr[],int n){
//     //    sort(arr.begin(),arr.end());
// //     int i = 0;
// //     int j = n-1;

// //     while(i<=j){
// //         if(arr[i]==0){
// //             i++;
// //         }

// //         else if(arr[j]==1){
// //             j--;
// //         }

// //         else if(arr[i]==1 && arr[j]==0){
// //             swap(arr[i],arr[j]);
// //             i++;
// //             j--;
// //         }

// //         else{
// //             continue;
// //         }
// //     }
// //     while(k<=)
// // }     
// }


// void sort012(int arr[], int n){
//     int i=0, j=n-1;
//     while(i<j){
//         if(arr[i]==0 && arr[j]==2){
//             i++;
//         }

//         else if(arr[i] == 0 && arr[j]==1){
//             i++;
//         }

//         else if(arr[i]==1 && arr[j]==0){
//             swap(arr[i], arr[j]);
//             i++;
//         }

//         else if(arr[i]==2 && arr[j]==0){
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }

//         else if(arr[i]==2 && arr[j]==2){
//             j--;
//         }

//         else if(arr[i]==1 && arr[j]==1){
//             i++;
//         }

//         else if(arr[i]==2 && arr[j]==1){
//             swap(arr[i], arr[j]);
//             j--;
//         }

//         else if (arr[i]==1 && arr[j]==2){
//             j--;
//         }

//         else if(arr[i]=0 && arr[j]==0){
//             i++;
//         }
//         cout<<"iteration 1"<<endl;

//     }
// }

void sortthem(vector<int> &a){
    int i = 0;
    int j =0;
    int k = a.size()-1;

    while(j<=k){
        if(a[j] == 0){
            swap(a[i],a[j]);
            i++;
            j++;
        }
        else if(a[j]==1){
            j++;
        }
        else{
            swap(a[k],a[j]);
            k--;
        }
    }
    
}
int main(){
    // int arr1[8] = {0,1,1,2,1,1,2,0};
    vector<int> a = {0,1,1,2,1,1,2,0};
    sortthem(a);
    // sort012(arr1,8);
    // print(arr1,8);
    print(a,8);
    
    return 0;
}