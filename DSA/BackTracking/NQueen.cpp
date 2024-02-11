#include <bits/stdc++.h>
using namespace std;

bool legalMove(vector<vector<int>> &BOARD, pair<int,int> position){
    
    return false;
}

void NQueen(vector<vector<int>> &BOARD, int col){
    for(int i=0; i<BOARD.size(); i++){
        pair<int,int> position;
        position.first = i;
        position.second = col;
        if(legalMove(BOARD,position)){
            BOARD[position.first][position.second] = 1;
            NQueen(BOARD,col+1);
        }
    }
}

int main(){
    vector<vector<int>> BOARD = {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };

    return 0;
}