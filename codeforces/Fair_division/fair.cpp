#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        vector<int>arr;
        int one = 0;
        int two = 0;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            if (temp == 1){
                one++;
            }else{
                two++;
            }
            arr.push_back(temp);
        }
        int sumall = accumulate(arr.begin(), arr.end(), 0);
        if ((one + 2 * two) % 2 != 0){
            cout<< "NO\n";
        }else{
        int sum = (one + 2 * two)/2;
        if (sum % 2 == 0 || (sum % 2 == 1 && one != 0)){
            cout <<"YES\n";
        }else{
            cout <<"NO\n";
        }
        
    }
    }
}