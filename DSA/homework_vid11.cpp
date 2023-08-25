#include <iostream>
using namespace std;

void reverse_alt(int arr[], int n){
    int start = 0;
    int end = 1;
    for(start,end; end<n; start=start+2, end = end+2){  //instead of using two variable you could've used i and i+1!! and then increament the value by i+=2
        int temp = arr[start]; //swap function does exactly this swap(var1, var2)
        arr[start] = arr[end];
        arr[end] = temp;
    }

}

void print(int arr[], int n){
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}


//brute force
int unique_one(int arr[], int n){
    int size = n;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            return arr[i];
        }
    }
}

//Better method
int unique_bet(int arr[], int size){
    int ans=0;
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
        // cout<<ans<<endl;
    }
    return ans;
}


//brute force
int duplicate(int arr[], int n){
    int size = n;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>1){
            cout<<arr[i]<<endl;
            return arr[i];
        }
    }
}

//better method
int dupli(int arr[], int n){
    int ans =0;

    //XOR all elements
    for(int i=0; i<n;i++){
        ans = ans^arr[i];
    }

    //XOR all elements till N-1
    for(int i=1; i<n; i++){
        ans = ans^i;
    }
    return ans;
}

//brute force
void intersection(int arr1[], int arr2[], int arr3[], int n1, int n2){
    int k = 0;
    for(int i=0; i<n1; i++){
    int count = 0;
    for(int j=0; j<n2; j++){
        if(arr1[i]==arr2[j]){
            count++;
        }
    }
    if(count>=1){
        arr3[k] = arr1[i];
        k++;
    }

 }
}


//better method
void intersection_new(int arr3[], int arr1[], int arr2[], int n, int m){
    //will be sent soon!
    //using the two pointer method 
}

int main(){
    int arr[6] = {1,5,5,1,4,5};
    // reverse_alt(arr,6);
    // print(arr,6);
    // int x = duplicate(arr,6);
    // cout<<endl<<x;
    // int arr1[6] = {1,2,3,4,5,6};
    // int arr2[4] = {2,4,7,8};
    // int arr3[6];
    // intersection(arr1,arr2,arr3,6,4);
    // cout<<endl;
    // print(arr3,6);
    int x = unique_bet(arr,6);
    cout<<x;
    return 0;
}