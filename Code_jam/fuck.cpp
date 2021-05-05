#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int test;
    cin >> test;
    int casee = 0;
    while(test--){
        casee++;
        int n,c;
        cin >> n >> c;
        vector<vector<int>>arr;
        vector<int>sorted;
        for(int i = 0; i < n; i++){
            sorted.push_back(i+1);
        }
        sort(sorted.begin(), sorted.end());
        do{
            vector<int>subarr;
            for(int i = 0; i<n;i++){
                subarr.push_back(sorted[i]);
            }
            arr.push_back(subarr);
        }while(next_permutation(sorted.begin(), sorted.end()));
        vector<int>hold;
        for(int k = 0; k < arr.size(); k++){
            bool found = false;
            int ans = 0;
            hold = arr[k];
        for(int i = 0; i < n - 1; i++){
            int j = min_element(arr[k].begin() + i, arr[k].end()) - arr[k].begin();   
            reverse(arr[k].begin()+i, arr[k].begin() + j+1);
            ans += j - i + 1;
        }
        if (ans == c){
            found == true;
            cout << "Case #"<<casee<<": ";
            for(int z = 0; z < n; z++){
                cout << hold[z]<<" ";
            }
            cout << endl;
            break;
        }else if (k == arr.size() - 1 && found == false){
            cout << "Case #"<<casee<<": ";
            cout << "IMPOSSIBLE"<<endl;            
        }           
        }
    }
}