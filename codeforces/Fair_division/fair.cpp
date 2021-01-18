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
         int one = 0;
         int two = 0;
         for(int i = 0; i < n ; i++){
             int temp;
             cin >> temp;
             if (temp == 1){
                 one += 1;
             }else{
                 two += 1;
             }
             arr.push_back(temp);
         }
         int sum = accumulate(arr.begin(), arr.end(), 0);
         if (sum % 2 == 0 ){
             if ((one > 1 && two > 1)){
                cout << "YES"<<endl;
             }else if ((one == 0 || two == 0)){
                 if (n%2 == 0){
                     cout <<"YES"<<endl;
                 }else{
                     cout <<"NO"<<endl;
                 }
             }
         }else{
             cout <<"NO"<<endl;
         }

     }
}