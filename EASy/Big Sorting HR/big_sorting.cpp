#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long long int>arr;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        long long int temp = stoll(s,nullptr);
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i< n; i++){
        cout << to_string(arr[i])<<endl;
    }
}