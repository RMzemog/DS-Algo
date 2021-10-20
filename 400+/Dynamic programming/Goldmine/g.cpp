#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>arr = {{0,1,4,2,8,2},
                               {4,3,6,5,0,4},
                               {1,2,4,1,4,6},
                               {2,0,7,3,2,2},
                               {3,1,5,9,2,4},
                               {2,7,0,8,5,1}};
    vector<vector<int>>dp(arr.size(),vector<int>(arr[0].size()));
    for(int j = arr[0].size()-1; j >= 0; j--){
        for(int i = arr.size()-1 ; i >= 0; i--){
            if(j == arr[0].size() - 1){
                dp[i][j] = arr[i][j];
            }else if(i == 0){
                dp[i][j] = arr[i][j] + max(dp[i][j+1],dp[i+1][j+1]);
            }else if (i == arr.size() - 1){
                dp[i][j] = arr[i][j] + max(dp[i][j+1],dp[i-1][j+1]);                
            }else{
                dp[i][j] = arr[i][j] + max(dp[i][j+1],max(dp[i+1][j+1],dp[i-1][j+1]));
            }
        }
    }
    int maxa = dp[0][0];
    for(int i = 0; i < dp.size(); i++){
        if(dp[i][0] > maxa){
            maxa = dp[i][0];
        }
    }
    cout<< maxa;
}