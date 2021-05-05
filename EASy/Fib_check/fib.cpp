#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int square = (5*n*n + 4);
    int square2 = (5*n*n -4);
    if(square == sqrt(square)* sqrt(square) || square2 == sqrt(square2)*sqrt(square2)){
        cout << "Is Fib";
    }else {
        cout << "Not Fib";
    }
}