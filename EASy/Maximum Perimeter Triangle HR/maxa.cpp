#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>sides;
    for(int i = 0 ;i < n; i++){
        int temp;
        cin >>temp;
        sides.push_back(temp);
    }
    sort(sides.begin(), sides.end(),greater<int>());
    bool bhhooooooo = true;
    // for(int i = 0; i < n ;i++){
    //     cout << sides[i]<<" ";
    // }
    // cout << endl;
    for(int i = 0; i < n - 2; i++){
        if(sides[i+1] + sides[i+2] > sides[i]){
            cout << sides[i+2] <<" "<< sides[i+1]<<" "<<sides[i];
            bhhooooooo = false;
            break;
        }
    }
    if (bhhooooooo == true){
        cout << -1;
    }
}