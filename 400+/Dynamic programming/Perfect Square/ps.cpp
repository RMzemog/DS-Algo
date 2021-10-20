#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        int mina = INT_MAX;
        for(int j = 1; j * j <= i; j++){
           if(i - j*j >= 0){
               mina = min(mina, dp[i - j*j]);
           } 
        }
        dp[i] = mina + 1;
    }
    for(int a: dp){
        cout<< a<<" ";
    }
}