#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

unsigned long long factorial(int n)
{
    const unsigned int M = 1000000007;
 
    unsigned long long f = 1;
    for (int i = 1; i <= n; i++)
        f = (f*i) % M;  // Now f never can
                        // exceed 10^9+7
    return f;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long count = 0;
        // for(int i = 0; i < (2 * n)-1 ; i++){
        //     if(i ^(i+1) == (i+2)^(i+3)){
        //         count++;
        //     } 
        // }
        cout << factorial(n)<<endl;
    }
}