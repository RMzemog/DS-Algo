#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int multi = n * m;
    int count = 0;
    while (multi != 0){
        multi -= n+m-1;
        n -= 1;
        m -= 1;
        count += 1;
    }
    if (count % 2 == 0){
        cout << "Malvika";
    }else{
        cout <<"Akshat";
    }
}