#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, aukaat; 
    cin >> n >> aukaat;
    vector<int>khilone;
    for(int i = 0; i < n; i++){
        int tempa;
        cin >> tempa;
        khilone.push_back(tempa);
    }
    sort(khilone.begin(), khilone.end());
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(aukaat - khilone[i] > 0){
            aukaat -= khilone[i];
            ans += 1;
        }else{
            cout << ans;
            break;
        }
    }
}