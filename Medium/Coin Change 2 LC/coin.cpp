#include<iostream>
#include<vector>
using namespace std;
int main(){
    int amt;
    cin >> amt;
    int n;
    cin >> n;
    vector<int>coins;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        coins.push_back(temp);
    }
    vector<int>dp(amt+1,0);
    // for(int i = 0; i < dp.size(); i++){
    //     cout << dp[i]<<" ";
    // }
    dp[0] = 1;
    for(int i = 0; i < coins.size(); i++){
        for(int j = coins[i]; j < dp.size(); j++){
            dp[j] += dp[j - coins[i]];
        }
    }
    cout << dp[amt];
}