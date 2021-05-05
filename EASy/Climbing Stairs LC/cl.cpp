#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    arr[0] = 1;
    arr[1] = 2;
    for(int i = 2; i < n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout << arr[n-1];
}