#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        arr[i] = 1;
        for(int j = 0; j<i; j++){
            if(nums[i] > nums[j] && arr[i] < arr[j]+1 ){
                arr[i] = arr[j] + 1;
            }
        }
    }
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] <<" ";
    // }
    int maxa = *max_element(arr.begin(),arr.end());
}