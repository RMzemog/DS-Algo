#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int value = 4;
    int coins[] = {1,2,3};
    int n = 3;
    int output = 4;
    vector<int>dp(output+1);
    dp[0] = 1;
    for(int i = 1; i < dp.size(); i++){
        for(int j = 0; j < n; j++){
            if(coins[j] <= i){
                dp[i] += dp[i-coins[j]];
            }
        }
    }
    for(auto it: dp){
        cout<< it<<" ";
    }
    cout<<endl;
    cout<<dp[output];
}