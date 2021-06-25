#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
string removeCharacters(string S, char c)
{
  
    S.erase(remove(
                S.begin(), S.end(), c),
            S.end());
  
    return S;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        string S;
        cin >> S;
        int flag = 0;
        S = removeCharacters(S,'?');
        int length = S.size();
        for(int i = 0; i < length; i++){
            if(S[i] != S[length-i-1]){
                flag = 1;
                break;
            }
        }
    if (flag) {
        cout <<"NO" << endl; 
    }    
    else {
        cout <<"YES"<< endl; 
    }
    }

}