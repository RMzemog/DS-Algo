#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int maxcuts(int n, int a, int b, int c){
    int dp[n+1];
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        dp[i] = -1;
        if(i-a >= 0) dp[i] = max(dp[i],dp[i-a]);
        if(i-b >= 0) dp[i] = max(dp[i],dp[i-b]);
        if(i-c >= 0) dp[i] = max(dp[i],dp[i-c]);
        if(dp[i] != -1) dp[i]++;
    }
    return dp[n];
}


int main(){
    int n = 5, a = 4, b = 2, c = 4;
    cout<<maxcuts(n,a,b,c);
}