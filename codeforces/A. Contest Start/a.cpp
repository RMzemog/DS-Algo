#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, x, t;
        cin >> n >> x >> t;
        long long z = t/x;
        if(z>n){
            cout<<(n-1)*(n)/2<<endl;
        }else{
            long long ans = z * n;
            ans -= (z)*(z+1)/2;
            cout<<ans<<endl;
        }
    }

}