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
    sort(arr.begin(), arr.end());
    int temp = arr[0];
    int ans = 0;
    int temp2 = 0;
    for(int i = 1; i< n; i++){
        if(arr[i] - 1 <= temp){
            ans += 1;
            // cout << arr[i] << endl;
        }else{
            // cout <<"Else"<<endl;
            // cout << arr[i]<<endl;
            temp = arr[i];
            temp2 = max(ans, temp2);
            // cout <<"temp2 =>"<<temp2<<endl;
            ans = 0;
        }
    }
    temp2 = max(ans, temp2);
    cout << temp2+1;
}