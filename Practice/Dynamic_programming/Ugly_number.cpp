#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool ugly_hai_ke_nhi(int check){
    while(check > 1){
        if(check % 2 == 0){
            check /= 2;
        }else if (check % 3 == 0){
            check /= 3;
        }else if (check % 5 == 0){
            check /= 5;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int count = 1;
    int i = 1;
    while(n > count){
        i++;
       // cout << "sss"<<endl;
        if(ugly_hai_ke_nhi(i)){
            count++;
            // cout <<count<<" -> "<<i<<endl;
        }
    }
    cout <<i;
    return i;
};