#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n = 5;
    int v[] = {15,14,10,45,30};
    int w[] = {2, 5, 1, 3, 4};
    int l = 7;
    int dp[n+1][l+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= l; j++){
            if(i == 0 || j == 0) dp[i][j] = 0;
            else{
                if(j >= w[i-1]){
                    int rcap = j - w[i-1];
                    if(dp[i-1][rcap] + v[i-1] > dp[i - 1][j]){
                        dp[i][j] = dp[i-1][rcap] + v[i-1];
                    }else{
                        dp[i][j] = dp[i-1][j];
                    }
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= l; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<< dp[n][l];
}