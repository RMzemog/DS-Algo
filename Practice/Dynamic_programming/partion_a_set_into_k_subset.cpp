#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cin >> n;
    cin >> k;
    if(n == 0 || k == 0 || n< k){
        cout << 0;
        return 0;
    }
    int dp[k+1][n+1];
    for(int t = 1; t <=k; t++){
        for(int p = 1; p <= n; p++){
            if(p < t){
                dp[t][p] = 0;
            }else if (p == t){
                dp[t][p] = 1;
            }else if (p > t){
                dp[t][p] = t * (dp[t][p-1]) + dp[t-1][p-1];
            }
        }
    }
    cout << dp[k][n]; 
}