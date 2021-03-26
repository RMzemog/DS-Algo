#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long int n;
        cin >> n;
        long long int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        long long int max = *max_element(arr, arr+n);
        long long int min = *min_element(arr, arr+n);
        cout << 2 *(max - min)<<endl;
        
    }
    
}

