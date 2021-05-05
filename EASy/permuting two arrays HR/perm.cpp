#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, k;
        vector<int> a;
        vector<int>b;
        cin >> n  >> k;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            b.push_back(temp);
        }
        sort(b.begin(), b.end(), greater<int>());
        sort(a.begin(), a.end());
        bool bhula = true;
        for(int i = 0; i < n ; i ++){
            if (a[i] + b[i] < k){
                bhula = false;
                cout <<"NO"<<endl;
                break;
            }
        }
        if(bhula == true){
            cout <<"YES"<<endl;
        }
    }
}