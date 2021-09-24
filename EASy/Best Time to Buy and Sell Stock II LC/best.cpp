#include<vector>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    vector<int>prices;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        prices.push_back(temp);
    }
    int min = prices[0];
    int profit = 0;
    for(int i = 1; i < prices.size(); i++){
        if(prices[i] > prices[i-1]){
            profit += (prices[i] - prices[i-1]);
        }
    }
    return profit;
}