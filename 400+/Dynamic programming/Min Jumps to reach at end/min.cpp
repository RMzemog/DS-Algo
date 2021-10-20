#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int minjumps(int arr[], int n){
    int dp[n];
    dp[n-1] = 0;
    for(int i = n - 2; i >= 0; i--){
        int steps = arr[i];
        int maxa = INT_MAX;
        for(int j = 1; j <= steps && i + j < n; j++){
            if(dp[i+j] != INT_MAX && dp[i + j]<maxa){
                maxa = dp[i+j];
            }
        }
        if(maxa != INT_MAX){
            dp[i] = maxa + 1;
        }
    }
    for(auto it: dp){
        cout<<it<<" ";
    }
    cout<<endl;
    return dp[0];
}



int main(){
    int arr[] = {3,4,2,1,2,1};
    int n = 6;
    cout<<minjumps(arr, n);
}