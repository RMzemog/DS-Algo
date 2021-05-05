#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>arr;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    vector<int>ans(n,0);
    ans[0] = 1;
    for(int i = 1; i < n; i++){
        ans[i] = 0;
        for(int j = 0; j < i; j++){
            if(arr[i] > arr[j] && ans[i] <= ans[j]){
                    ans[i] = ans[j];
            }
        }
        ans[i]++;
    }
    cout << *max_element(ans.begin(),ans.end());
}