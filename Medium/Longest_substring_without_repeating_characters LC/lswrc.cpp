#include<vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
           vector<int>ans(256,-1);
           for(int i = 0; i < ans.size(); i++){
               cout << ans[i] <<" ";
           }
           cout << endl;
        int maximum=0,Li=-1;
        for(int i=0;i<s.length();i++){
            if(ans[s[i]]>Li){
                cout << ans[s[i]]<<"    "<<s[i]<<endl;
                Li = ans[s[i]];
            }
            ans[s[i]]=i;
            maximum = max(maximum,i-Li);
        }
           for(int i = 0; i < ans.size(); i++){
               cout << ans[i] <<" ";
           }
        cout << maximum;
}