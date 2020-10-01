#include<iostream>
using namespace std;
int main(){
    int l, b;
    cin >> l >> b;
    int a = l * b;
    if (a % 2 != 0){
        a--;
    }
    cout << a/2;

}