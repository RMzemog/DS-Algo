#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, column;
    cin >> row >> column;
    vector<vector<int>>grid(row, vector<int>(column));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cin >> grid[i][j];
        }
    }
    // for(auto it: grid){
    //     for(auto ti : it){
    //         cout<< ti<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<vector<int>>gr(row, vector<int>(column));
    gr[0][0] = grid[0][0];
    // cout<<gr[0][0]<<" ";
    for(int columns = 1; columns < column; columns++){
        gr[0][columns] = gr[0][columns-1] + grid[0][columns];
        // cout<< gr[0][columns]<<" ";
    }
    for(int rows = 1; rows < row; rows++){
        gr[rows][0] = gr[rows - 1][0] + grid[rows][0];
        // cout<<gr[rows][0]<<endl;
    }
    for(int i = 1; i < row; i++){
        for(int j = 1; j < column; j++){
            gr[i][j] = min(gr[i-1][j], gr[i][j-1]) + grid[i][j];
        }
    }
    for(auto it: gr){
        for(auto ti : it){
            cout<< ti<<" ";
        }
        cout<<endl;
    }
    cout<< gr[row-1][column-1];
}