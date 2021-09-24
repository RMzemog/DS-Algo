#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {6,2,6,5,1,2};
    sort(nums.begin(), nums.end());
    int ans = 0;
    for(int i = 0; i < nums.size() - 1; i+=2){
        ans+= nums[i];
    }
    cout << ans;
}