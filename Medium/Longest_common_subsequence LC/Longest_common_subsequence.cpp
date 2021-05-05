#include<iostream>
using namespace std;
int main(){
    string text1;
    string text2;
    cin >> text1;
    cin >> text2;
    int dp[text1.size()+1][text2.size()+1];
    int rows = sizeof(dp)/sizeof(dp[0]);
    int cols = sizeof(dp[0])/sizeof(int);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            dp[i][j]=0;
        }
    }    
    // cout << rows << " "<< cols<<endl;
    for(int i = rows - 2; i >= 0; i--){
        for(int j = cols - 2; j >= 0; j--){
            if(text1[i] == text2[j]){
                dp[i][j] = 1 + dp[i+1][j+1];
            }else{
                dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }
    cout << dp[0][0];
 }  