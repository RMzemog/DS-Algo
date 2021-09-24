#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    vector<vector<int>>arr = {{1,2,100},{2,1,19},{3,2,27},{4,1,25},{5,1,15}};
    sort(arr.begin(), arr.end(),[](const vector<int>& a, const vector<int>& b){return a[2]>b[2];});
    for(auto it: arr){
        cout <<it[0]<<" "<<it[1]<<" "<<it[2]<<endl;
    }
    int day = 0;
    vector<bool>b(n,false);
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = min(n, arr[i][1] - 1); j >= 0; j--){
            if(b[j] == false){
                day += 1;
                sum += arr[i][2];
                b[j] = true;
                break;
            }
        }
    }
    cout <<day<<" "<<sum;
}