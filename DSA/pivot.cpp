#include <bits/stdc++.h>
using namespace std;

int pivto(int arr[], int n){
    int s=0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int check = 0;
    while(s<e){
        cout<<"Mid is : "<<mid<<endl;
        int Leftsum = 0;
        int Rightsum = 0;
        for(int i = 0; i<mid; i++){
            Leftsum = Leftsum + arr[i];
            cout<<"value of i: "<<i<<endl;
        }
        cout<<"leftsum: "<<Leftsum<<endl;

        for(int j = mid+1; j<n; j++ ){
            Rightsum = Rightsum + arr[j];
        }
        cout<<"rightsum: "<<Rightsum<<endl;

        if(Leftsum<0 || Rightsum<0){
            if(Leftsum<Rightsum){
                e = mid;
            }


            else{
                e = mid
            }
        }
        if(Leftsum==Rightsum){
            check = 1;
            break;
        }

        else if(Leftsum<Rightsum){
            s = mid+1;
            // cout<<"Yes";

        }

        else{
            e = mid;
            // cout<<"no";
        }

        mid = s+(e-s)/2;
    }
    if(check==1){
            return mid;
    }

    else{
        return -1;
    }
}
int main(){
    int arr[6] = {-1,-1,-1,-1,0,1};
    int x = pivto(arr,6);
    cout<<x;
    return 0;
}