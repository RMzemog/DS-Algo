#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

bool isSafe(vector<vector<int>>& arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}
bool ratinMaze(vector<vector<int>>& arr, int x , int y, int n, vector<vector<int>>& solArr){
    if(x==n-1 && y == n-1){
        solArr[x][y] = 1;
        return true;
    }
    if(isSafe(arr,x,y,n)){
        solArr[x][y] = 1;
        if(ratinMaze(arr, x+1, y,n,solArr)){
            return true;
        }
        if(ratinMaze(arr,x,y+1,n,solArr)){
            return true;
        }
        solArr[x][y] = 0;
        return false;
    }
    return false;
}

int main(){
    int n = 5;
    // vector<vector<int>>arr = {{1,0,1,0,1},
    //                          {1,1,1,1,1},
    //                          {0,1,0,1,0},
    //                          {1,0,0,1,1},
    //                          {1,1,1,0,1}};
    vector<vector<int>>arr = {{1,1,1,1,1},
                             {1,1,1,1,1},
                             {1,1,1,1,1},
                             {1,1,1,1,1},
                             {1,1,1,1,1}};
    vector<vector<int>>solArr(n,vector<int>(n,0));
    if(ratinMaze(arr,0,0,n,solArr)){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout<<solArr[i][j];
            }
            cout<<endl;
        }
    }
}