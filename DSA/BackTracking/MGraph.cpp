#include <bits/stdc++.h>
using namespace std;

bool possible(int node, int i,vector<vector<int>> &adjList, vector<int> &nodeColors){
    for(auto j: adjList[node]){
        if(nodeColors[j]==i){
            return false;
        }
    }
    return true;
}

bool colorGraph(vector<vector<int>> &adjList, int node, vector<int> &nodeColors, int m) {
    if (node == adjList.size()) {
        return true;
    }
    
    for(int i=0; i<m; i++){
        if(possible(node,i,adjList,nodeColors)){
            nodeColors[node]=i;
            if(colorGraph(adjList,node+1,nodeColors,m)){
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<vector<int>> adjList = {
        {1, 2},
        {0,2,3},
        {0,1,3},
        {1, 2}
    };

    vector<int> nodeColors(adjList.size(), -1); // Initialize nodeColors with 0
    int m = 3;
    bool possible = colorGraph(adjList, 0, nodeColors, m);
    cout << possible << endl;
    return 0;
}
