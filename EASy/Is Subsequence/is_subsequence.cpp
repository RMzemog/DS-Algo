#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int man(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    for(int i = 0; i < t.size(); i++){
        if(t[i] == s[0]){
            s = s.substr(1,s.size()-1);
        }
    }
    if(s.size() == 0){
        cout << "True";
    }else{
        cout << "False";
    }
}