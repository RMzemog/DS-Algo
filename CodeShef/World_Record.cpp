#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
    float a,b,c,d;
    cin >> a >> b >> c >> d;
    float ans = 100/(a * b * c * d);
    double doo = (int)(ans*100.0+0.5)/100.0;
    if (doo >= 9.58){
        cout << "NO"<<endl;
    }else{
        cout << "YES"<<endl;
    }

    }
}