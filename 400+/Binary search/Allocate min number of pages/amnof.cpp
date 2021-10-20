#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int>vec, int n, int k, int mx){
    int student = 1;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += vec[i];
        if(sum > mx){
            student++;
            sum = vec[i];
        }
        if(student > k){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int>vec(n);
    int k;
    cin >> k;
    int res = 0;
    for(int i = 0; i < n; i++){
        cin >>vec[i];
    }
    int start = *max_element(vec.begin(), vec.end());
    int end = accumulate(vec.begin(), vec.end(),0);
    while(start<= end){
        int mid = start + (end - start)/2;
        if(isValid(vec,n,k,mid)){
            res = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    cout<< res;
}