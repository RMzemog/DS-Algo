#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long long x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        long long z = n/2;
        if(isPerfectSquare(z)){
            cout<<"YES"<<endl;
            continue;
        }
        if(n % 4 != 0){
            cout<<"NO"<<endl;
            continue;
        }
        z = n/4;
        if(isPerfectSquare(z)){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
}