#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        vector<int>arr;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        int done = 0;
        bool second = true;
        for(int i = 0; i< n; i++){
           int index = i + 1;
           if (index < arr[i]){
               second = false;
               break;
           }else{
               done += index - arr[i];
           }
        }
        if (second == false){
            cout <<"Second"<<endl;
        }else{
            if (done % 2 == 0){
                cout <<"Second"<<endl;
            }else{
                cout <<"First"<<endl;
            }
        }
    }
}
