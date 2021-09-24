#include<iostream>
using namespace std;

int main(){
    int a[] = {2,14,8,22,2,34,22,66,14,8};
    int n = 11;
    int res = a[0];
    for(int i = 1; i < n; i++){
        res = res ^ a[i];
    }
    cout<< res;
}