#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int>arr;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int ans = 0;
    sort(arr.begin(), arr.end(), greater<int>());
        int totala = 0;
        int hola = 0;
        for(int i = 0; i < n; i++){
            if((i+1) % k == 0){
                totala += arr[i];
                ans+= (hola + 1) * totala;
                hola++;
                totala = 0;
            }else{
                totala+= arr[i];
            }
        }
    ans += (hola + 1) * totala;
    cout << ans;
}