#include <bits/stdc++.h>
using namespace std;


int top(vector<int> &mergedArray){
    int top_index = mergedArray.size()-1;
    return mergedArray[top_index];
}

vector<int> sortedArray(vector <int> &a, vector <int> &b) {
    int i = 0;
    int j = 0;
    int check = min(a[0],b[0]);
    vector<int> mergedArray;
    mergedArray.push_back(check);
    while(i<a.size() && j<b.size()){
        if(top(mergedArray)==a[i]){
            i++;
        }

        else if(top(mergedArray)==b[j]){
            j++;
        }

        else if(a[i]==b[j]){
            mergedArray.push_back(a[i]);
            i++;
            j++;
        }

        else if(a[i]<b[j]){
            mergedArray.push_back(a[i]);
            i++;
        }

        else{
            mergedArray.push_back(b[j]);
            j++;
        }
    }

    while(i<a.size()){
        mergedArray.push_back(a[i]);
        i++;
    }
    while(j<b.size()){
        mergedArray.push_back(b[j]);
        j++;
    }
    return mergedArray;
}

int main(){
    vector<int> a ={3,3, 4, 5 ,6 ,7, 8, 9, 9, 9 };
    vector<int> b ={2 ,4, 10, 10 };
    vector<int> merged = sortedArray(a,b);
    for(auto i:merged){
        cout<<i<<",";
    }cout<<endl;
    return 0;
}