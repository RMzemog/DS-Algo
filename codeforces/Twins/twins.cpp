#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>v;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int a = accumulate(v.begin(), v.end(), 0);
    // cout <<"SUM "<< a<<endl;
    int b = 0;
    sort(v.begin(), v.end(), greater<int>());
    
    for(int i = 0; i < n; i++){
        b += v[i];
        // cout<<"I"<<v[i]<<endl;
        if (b > (a/2)){
            cout<<i+1;
            break;
        }
    }
}