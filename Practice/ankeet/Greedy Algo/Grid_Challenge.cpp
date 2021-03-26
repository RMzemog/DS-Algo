#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string>s;
        for(int i = 0;i<n; i++){
            string ss;
            cin >> ss;
            sort(ss.begin(), ss.end());
            s.push_back((ss));
        }
        bool dona = true;
    for(int i = 0; i <n; i++){
        for(int j = 1; j< n; j++){
            if(s[j][i] < s[j-1][i]){
                dona = false;
                break;
            }
            if(dona == false){
                break;
            }
        }
    }
    if(dona == true){
        cout <<"YES"<<endl;
    }else{
                        cout <<"NO"<<endl;
    }
    }
}