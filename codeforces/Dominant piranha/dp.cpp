#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v;
        for(int i = 0; i < n; i++){
            int temp;
            cin >>temp;
            v.push_back(temp);
        }
        int maxi = *max_element(v.begin(), v.end());
        bool done = true;
        for(int i = 0; i < n - 1; i++){
            if (v[i] != v[i+1]){
                done = false;
            }
        }
    if (done == true){
        cout << -1<< endl;
        continue;
    }
    for (int i = 0; i < n; i++){
        // cout << "v[i] :"<< v[i]<< endl;
        if (v[i] == maxi){
            if (i - 1 >= 0){
                // cout <<"i - 1" << endl;
                if (v[i - 1] < v[i]){
                    cout << i + 1<< endl;
                    break;
                }
            }if (i + 1 < n){
                // cout << "i + 1"<< endl;
                if (v[i + 1] < maxi){
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
    }
}