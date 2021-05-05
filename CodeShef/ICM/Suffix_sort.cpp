#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        vector<int>arr;
        int place;
        for(int i = 0; i<n; i++){
            int temp;
            cin >> temp;
            if (i > 0 && temp < arr[i-1]){
                place = i;
            }
            arr.push_back(temp);
        }
    vector<int>sorted(arr.begin(),arr.end());
    sort(sorted.begin(), sorted.end());
    if (arr == sorted){
        cout <<"YES"<<endl;
        cout <<"0"<<endl;
    }else if(arr != sorted){
        vector<int>tempo;
        for(int i = place; i <n; i++){
            tempo.push_back(arr[i]);
        }
        for(int i = 0; i < place; i++){
            tempo.push_back(arr[i]);
        }
    if(sorted == tempo){
        cout <<"YEs"<<endl;
        cout <<'1'<<endl;
    }else{
        cout <<"NO"<<endl;
    }
    }
    }
}