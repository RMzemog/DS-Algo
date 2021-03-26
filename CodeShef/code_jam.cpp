#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        vector<vector<int>>arr;
        for(int i = 0; i < n; i++){
            vector<int>temp;
            for(int j = 0; j < n; j++){
                int temp1;
                cin >> temp1;
                temp.push_back(temp1);
            }
            arr.push_back(temp);
        }

        int a1 = 0;
        for(int i = 0; i < n; i++){
                a1 += arr[i][i];
            }
        // cout << a1 << endl;
        int a2 = 0;
        for(int i = 0; i < n; i++){
            vector<int>gimmic;
            for(int j = 0; j < n; j++){
                gimmic.push_back(j+1);
            }
            cout << endl;
            for(int j = 0; j < n; j++){
                if(find(arr[i].begin(), arr[i].end(),gimmic[j]) == arr[i].end()){
                    a2 += 1;
                    break;
                }
        }
        }
        cout << endl;
        cout <<"A1 =>" <<  a1 <<" "<<"A2 => " <<a2<<endl;
}
}
