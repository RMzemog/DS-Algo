#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int>arr(k);
        for(int i = 0; i < k; i++){
             int temp;
             cin >> temp;
             arr[i] = n - temp;
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        int total = 0;
        for(int i = 0; i < k; i++){
            if(total + arr[i] <= n){
                total += arr[i];
                ans++;
            }
        }
        cout<< ans<<endl;
    }
}