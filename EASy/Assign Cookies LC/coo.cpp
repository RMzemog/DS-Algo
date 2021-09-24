#include<iostream>
#include<vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>g = {1,2,3};
    vector<int>s = {1,1};
    sort(g.begin(),g.end());
    sort(s.begin(), s.end());
    int i = 0;
    for(int j = 0; i < g.size() && j < s.size(); j++){
        if (g[i] <= s[j]) i++;
    }
    cout << i;
}