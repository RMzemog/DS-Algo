#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int getmin(int arr[], int n, int val){
    int dp[val+1];
    dp[0] = 0;
    for(int i = 1; i <= val; i++){
        dp[i] = INT_MAX;
    }
    for(int i = 1; i<=val; i++){
        for(int j = 0; j< n; j++){
            if(arr[j] <= i){
                int sub_res = dp[i - arr[j]];
                if(sub_res != INT_MAX){
                    cout<<"sd";
                    dp[i] = min(dp[i],  sub_res + 1);
                }
            }
        }
    }
    for(auto it:dp){
        cout<<it<<" ";
    }
    cout<<endl;
    return dp[val];
}



int main(){
    int coins[] = {3,4,1};
    int val = 5;
    int n = 3;
    cout<< getmin(coins,n,val);
}