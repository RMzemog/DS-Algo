#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >>test;
    int casee = 0;
    while(test--){
        casee++;
        int n;
        cin >> n;
        vector<int>arr;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        int ans = 0;
        for(int i = 0; i < n - 1; i++){
            int j = min_element(arr.begin() + i, arr.end()) - arr.begin();   
            reverse(arr.begin()+i, arr.begin() + j+1);
            ans += j - i + 1;
        }
        cout <<"Case #"<<casee<<": "<< ans << endl;
    }
}