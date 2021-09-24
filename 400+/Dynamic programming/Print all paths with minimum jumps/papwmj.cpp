#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int arr[] = {3,3,0,2,1,2,4,2,0,0};
    int n = 10;
    int dp[n];
    dp[n-1] = 0;
    for(int i = 0; i <= n-2; i++){
        dp[i] = INT_MAX;
    }
    for(int i = n - 2; i >= 0; i--){
        int steps = arr[i];
        int min = INT_MAX;
        for(int j = 1; j <= steps and i + j < n;j++){
            if(dp[i + j] != INT_MAX && dp[i + j] < min){
                min = dp[i+j];
            }
        }
        if(min != INT_MAX){
            dp[i] = min + 1;
        }
    }
    for(auto it: dp){
        cout<<it<<" ";
    }
    cout<<endl;
}