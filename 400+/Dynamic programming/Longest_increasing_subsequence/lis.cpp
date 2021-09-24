#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int dp[n];
    dp[0] = 1;
    for(int i = 1; i < n; i++){
        int max = 0;
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i]){
                if(dp[j] > max) max = dp[j];
            }
        }
        dp[i] = max + 1;
    }
    for(auto it: dp){
        cout<< it<<" ";
    }
    cout<< endl<<dp[n-1];
}