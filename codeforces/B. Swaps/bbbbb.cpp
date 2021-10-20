#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int>>even(n), odd(n);
        for(int i = 0; i < n; i++){
            cin >> odd[i].first;
            odd[i].second = i;
        }
        for(int i = 0; i < n; i++){
            cin >> even[i].first;
            even[i].second = i;
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        // for(auto it:even){
        //     cout<<it.first<<" "<<it.second;
        //     cout<<endl;
        // }
        vector<int>mn(n);
        mn[n-1] = even[n-1].second;
        for(int i = n-2; i >= 0; i--){
            mn[i] = min(mn[i+1], even[i].second);
        }
        int swap = INT_MAX;
        for(int i= 0; i < n; i++){
            // cout<<mn[i]<<" ";
            swap = min(swap, odd[i].second + mn[i]);
        }
         cout<<swap<<endl;
    }
}