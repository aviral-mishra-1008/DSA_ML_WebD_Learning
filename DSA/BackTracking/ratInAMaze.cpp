#include <bits/stdc++.h>
using namespace std;

void findSol(int i, int j,vector<vector<int>> &Maze, vector<string> &ans, string s, vector<int> &di, vector<int> &dj, int n, vector<vector<bool>> &visited){
    if(i==n-1 && j==n-1){
        ans.push_back(s);
        return;
    } 

    string dirs = "DLRU";

    for(int k=0; k<n; k++){
        int factorX = i+di[k]; //we basically made the entire +1,-1,0 thingy assocaited with the up down left right into this array set di and dj where d means deviation of d because it makes life a lot hassle free!!
        int factorY = j+dj[k]; 

        if(factorX>=0 && factorY>=0 && factorX<n && factorY<n && !visited[factorX][factorY] && Maze[factorX][factorY]==1){  //then checking all conditions at once
            visited[factorX][factorY] = true;
            findSol(factorX,factorY,Maze,ans,s+dirs[k],di,dj,n,visited);
            visited[factorX][factorY] = false;
        }
    }
}

int main(){
    vector<vector<int>> Maze = {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };
    int n = Maze.size();
    vector<int> di = {1,0,0,-1};
    vector<int> dj = {0,-1,1,0};
    vector<string> ans;
    vector<vector<bool>> visited(n,vector<bool>(n,false)); //this is how you initialise a vector with a default value and size vector<type> name(size,default)
    findSol(0,0,Maze,ans,"",di,dj,n,visited);
    for(auto i: ans){
        cout<<i<<endl;
    }

    return 0;
}