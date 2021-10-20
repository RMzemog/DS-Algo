#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int val = 5;
    int coins[] = {6,6,6};
    int dp[val+1];
    int n = 3;
    dp[0] = 0;
    for(int i = 1; i <= val; i++){
        dp[i] = INT_MAX; 
    }
    for(int i = 1; i <=val; i++){
        for(int j = 0; j < n; j++){
            if(coins[j] <= i){
                int subres = dp[i-coins[j]];
                if(subres != INT_MAX){
                    dp[i] = min(dp[i],subres + 1);
                }
            }
        }
    }
    cout<<dp[val];
}