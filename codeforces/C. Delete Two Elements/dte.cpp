#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        long long sums = 0;
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            sums+=v[i];
        }
        long long avg = sums/(n);
        long long sumosa = avg * (n-2);
        long long suma = (sums * 2)/n;
        // cout<< suma<<endl;
    long long c = 0;

    map<long long, long long>mp;
    for(long long i = 0; i < n; i++){
        long long x = suma - v[i];
        if(mp[x] == 0){
            mp[v[i]]++;
        }else{
            c += mp[x];
            mp[v[i]]++;
        }
    }
if(((2* sums)%n) != 0){
     cout<<0<<endl;   
    }else{
    cout<<c<<endl;
    }

    }
}