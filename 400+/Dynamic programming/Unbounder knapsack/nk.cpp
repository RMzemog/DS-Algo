#include<iostream>
using namespace std;
int main(){
    int tar = 7;
    int val[] = {15,14,10,45,30};
    int wth[] = {2,5,1,3,4};
    int dp[tar+1];
    dp[0] = 0;
    for(int i = 1; i < tar+1; i++){
        int maxa = 0;
        for(int j = 0; j < 5; j++){
            if(i >= wth[j]){
                if(dp[i - wth[j]] + val[j] > maxa){
                    maxa = dp[i - wth[j]] + val[j];
                }
            }
        }
        dp[i] = maxa;
    }
    for(auto it:dp){
        cout<<it<<" ";
    }
}