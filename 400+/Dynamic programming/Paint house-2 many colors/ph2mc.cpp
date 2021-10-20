#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, c;
    cin >> n >> c;
    vector<vector<int>>arr(n, vector<int>(c));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    vector<vector<int>>dp(n, vector<int>(c));    
    int least = INT_MAX;
    int sleast = INT_MAX;
    for(int j = 0; j < c; j++){
        dp[0][j] = arr[0][j];
        if(arr[0][j] <= least){
            sleast = least;
            least = arr[0][j];
        }else if (arr[0][j] <= sleast){
            sleast = arr[0][j];
        }
    }
    for(int i = 1; i < n; i++){
        int nleast = INT_MAX;
        int nsleast = INT_MAX;
        for(int j = 0; j < c; j++){
            if(least == dp[i-1][j]){
                dp[i][j] = arr[i][j] + sleast;
            }else{
                dp[i][j] = least + arr[i][j];
            }
            if(dp[i][j] <= nleast){
                nsleast = nleast;
                nleast = dp[i][j];
            }else if (dp[i][j] <= nsleast){
                nsleast = dp[i][j];
            }
        }
        least = nleast;
        sleast = nsleast;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < c; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<least;
}