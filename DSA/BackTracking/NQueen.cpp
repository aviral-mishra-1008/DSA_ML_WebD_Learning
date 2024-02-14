#include <bits/stdc++.h>
using namespace std;

bool legalMove(vector<vector<int>> &BOARD, pair<int, int> position) {
    int n = BOARD.size();
    int row = position.first;
    int col = position.second;

    // checking rows
    for (int i = col; i >= 0; i--) {
        if (BOARD[row][i] == 1) {
            return false;
        }
    }

    col = position.second;

    // checking upper left diagonal
    while (row>=0 && col>= 0) {
        if (BOARD[row][col] == 1) {
            return false;
        }
        row--;
        col--;
    }

    row = position.first;
    col = position.second;

    // checking lower left diagonal
    while (row<n && col>=0) {
        if (BOARD[row][col] == 1) {
            return false;
        }
        row++;
        col--;
    }

    return true;
}

void NQueen(vector<vector<int>> &BOARD, int col, vector<vector<vector<int>>> &ans) {
    if (col == BOARD.size()) {
        ans.push_back(BOARD);
        return;
    }

    for (int i = 0; i < BOARD.size(); i++) {
        pair<int, int> position;
        position.first = i;
        position.second = col;
        if (legalMove(BOARD, position)) {
            BOARD[position.first][position.second] = 1;
            NQueen(BOARD, col + 1, ans);
            BOARD[position.first][position.second] = 0;
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

    vector<vector<vector<int>>> ans;
    NQueen(BOARD,0,ans);
    int count = 1;
    for(auto i:ans){
        cout<<"Answer Number "<<count<<endl;
        for(auto j:i){
            for(auto k:j){
                cout<<k<<' ';
            }cout<<endl;
        }cout<<endl<<endl; count++;
    }

    return 0;
}