#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, k;
        cin >> n >> k;
        vector<int>ni;
        for(int i = 0; i < n ; i++){
            int temp;
            cin >> temp;
            ni.push_back(temp);
        }
        int len = ni.size();
        sort(ni.begin(), ni.end(), greater<int>());
        for(int i = 0; i < n; i++){
            cout << ni[i] << " ";
        }
        for(int i = 0; i < n; i++){
            int tempo = ni[i];
            for(int j = i+1; j < n ; j++){
                int tempo2 = 0;
                if (tempo + ni[j] <= k){
                    tempo += ni[j];
                }
            }
        }
        cout<<endl;
    }
}