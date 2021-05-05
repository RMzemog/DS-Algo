#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int>arr;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] <<" ";
    // }
    //cout << endl;
    if(k == 1){
        cout << arr[0];
    }else {
        int hola = 0;
        int mini = INT_MAX;
        for(int i = k-1; i < n; i++){
            // cout << arr[i] - arr[hola] <<" ";
            mini = min(mini,arr[i] - arr[hola]);
            hola++;
        }
        cout << mini;
    }
}