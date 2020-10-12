#include<iostream>
// k = banana dollar * no off banana k 2k 
// n = dollar
// w = banana
// 3 17 4 13
using namespace std;

int main(){
    int k, n, w;
    int dd = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++ ){
        dd += k * i;
    }
    if (dd > n){
    cout << dd - n;
    }else{
        cout << 0;
    }
}