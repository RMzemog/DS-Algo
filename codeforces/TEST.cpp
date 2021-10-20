#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    set<char>ss;
    string s;
    cin >> s;
    for(auto it:s){
        ss.insert(it);
    }
    // for(auto it:ss){
    //     cout<< it<<" ";
    // }
    int maxa = 0;
    for(auto it : ss){
        maxa = max(maxa, count(s.begin(), s.end(),it));
    }
    cout<< maxa;
}