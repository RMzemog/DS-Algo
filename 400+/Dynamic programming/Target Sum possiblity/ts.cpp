#include<iostream>
using namespace std;
int main(){
    int target = 10;
    int arr[] = {4,2,7,1,3};
    int dp[6][target+1];
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < target+1; j++){
            if(i == 0 && j == 0){
                dp[i][j] = 1;
            }
            else if(i == 0){
                dp[i][j] = 0;
            }
            else if(j == 0){
                dp[i][j] = 1;
            }else{
                if(dp[i-1][j] == 1){
                    dp[i][j] = 1;
                }else{
                    int val = arr[i-1];
                    if(j >= val){
                        if(dp[i-1][j-val]==1){
                            dp[i][j] = 1;
                        }else{
                            dp[i][j] = 0;
                        }
                    }else{
                        dp[i][j] = 0;
                    }
                }
            }
        }
    }
        for(int i = 0; i < 6; i++){
            for(int j = 0; j < target+1; j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
}