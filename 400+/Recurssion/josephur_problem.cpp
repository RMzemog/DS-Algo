#include<iostream>
using namespace std;

int jor(int n, int k){
    if(n == 1){
        return 0;
    }
    return (jor(n-1,k) + k)%n;
}

int main(){
    int n = 5;
    int k = 3;
    cout<<jor(n , k);
}