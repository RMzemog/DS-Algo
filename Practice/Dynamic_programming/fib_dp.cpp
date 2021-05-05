#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >>n;
    int prev = 0;
    int curr = 1;
    if (n == 0){
        cout << 0;
        return 0;
    }if(n == 1){
        cout << 1;
        return 0;
    }
    int temp = 0;
    for(int i = 2; i <= n; i++){
        temp = prev+curr;
        prev = curr;
        curr = temp;
    }
    cout<< curr;
}