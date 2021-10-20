#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;

int lcs(string s1, string s2){
    int maxa = 0;
    int dp[s1.size()+1][s2.size()+1];
    for(int i = 0; i < s1.size()+1; i++){
        for(int j = 0; j < s2.size()+1; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }else{
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                    maxa = max(dp[i][j], maxa);
                }else{
                    dp[i][j] = 0;
                }
            }
        }
    }
    // for(int i = 0; i < s1.size()+1; i++){
    //     for(int j = 0; j < s2.size()+1; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return maxa;
}

int main(){
    int test;
    cin >> test;
    while(test--){
        string s1, s2;
        cin >> s1;
        cin >> s2;
        // cout<< lcs(s1,s2)<<endl;
        int ans = 0;
        ans += s1.size() - lcs(s1,s2);
        ans += s2.size() - lcs(s1,s2);
        cout<<ans<<endl;
    }

}