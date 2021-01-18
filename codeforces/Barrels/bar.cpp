#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int v[n] = {};
        for(int i = 0; i< n;i++){
            int temp;
            cin >> temp;
            v[i] = (temp);
        }
        sort(v, v+n);
        reverse(v, v+n);
        // for(int i = 0; i < n; i++){
        //     cout <<v[i]  << endl;
        // }
        long long sum = 0;
        for(int i = 0; i <= k; i++){
            sum += v[i];
        }
        cout << sum<<endl;

    }
}