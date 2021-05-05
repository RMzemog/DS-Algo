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
        int even_sum = 0;
        int odd_sum = 0;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            arr.push_back(temp);
            if ( i % 2 == 0){
                even_sum+= temp;
            }else{
                odd_sum += temp;
            }
        }
        if(odd_sum == even_sum){
            return -1;
        }
        reverse(arr.begin(),arr.end());
        int back_odd = 0;
        int back_even = 0;
        for(int i = 1; i < n; i++){
            if ((i-1)% 2 == 0){
                back_even += arr[i];
            }else if ((i-1) % 2 != 0){
                back_odd += arr[i];
            }
            if ()
        }
    }
}