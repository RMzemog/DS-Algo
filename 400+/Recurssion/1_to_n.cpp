#include<iostream>
using namespace std;
int i = 0;
void rec(int n){
    if(i > n){
        return;
    }
    cout<< i;
    i++;
    rec(n);
}

int main(){
    int n = 9;
    rec(9);
}