#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    vector<int>v;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int i = m; i < n; i+=m){
        if(i){
        cout <<v[i]<<endl;
        }
    }
}