#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int dd = 4;
    cin>> n;
    int ans = 0;
    vector<int>cargo;
    for(int i =0; i< n; i++){
        int temp;
        cin >>temp;
        cargo.push_back(temp);
    }
    sort(cargo.begin(), cargo.end());
    int topa = 0;
    for(int i = 0; i < n; i++){
        if (i == 0){
            topa = cargo[i]  + 4;
        }
        if(cargo[i] > topa){
            // cout << "cargo "<< cargo[i] <<" ";
            ans += 1;
            topa = cargo[i] + 4;
        }
    }
    cout << ans + 1;
}