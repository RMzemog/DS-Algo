#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long a,b;
        cin >> a >>b;
        if(b != 1){
            cout<<"YES"<<endl;
            cout<<(a*b)<<" "<<a<<" "<<(b +1)*a<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}