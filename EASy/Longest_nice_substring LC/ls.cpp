#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool find(string str, int s, int e){
    unordered_map<char,int>mp;
    for(int i = s; i <=e; i++){
        mp[str[i]]++;
    }
    for(int i = s; i <=e; i++){
        if(mp.find(toupper(str[i])) != mp.end() && mp.find(tolower(str[i])) != mp.end()){
            continue;
        }
        else{
            return false;
        }
        return true;
    }
}


string ssss(){
    string s;
    cin >> s;
    string sub;
    int len = 0;
    for(int i = 0; i < s.size(); i++){
        for(int j = i; j < s.size(); j++){
            string ss = s.substr(i,j);
            if(find(s,i,j)){
                if(j-i+1>len){
                    len = j-i+1;
                    sub = s.substr(i,j-i+1);
                }
            }
        }
    }
    return sub;
}
int main(){
    cout << ssss();
}