#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int value = 10;
    int n = 4;
    int coins[] = {2,5,3,6};
    int dp[value+1];
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = coins[i]; j <= value; j++){
            if(dp[j - coins[i]]){
                dp[j] += dp[j - coins[i]];
            }
        }
    }
    for(auto it: dp){
        cout<< it<<" ";
    }
}