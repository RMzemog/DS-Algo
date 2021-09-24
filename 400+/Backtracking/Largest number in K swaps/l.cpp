#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
string ans;

void solve(string str, int n, int k, string& ans, int index){
    if(k==0){
        return;
    }
    char maxchar = str[index];
    for(int i = index+1;i <n; i++){
        if(maxchar<str[i]) maxchar=str[i];
    }
    if(maxchar != str[index]){
        k--;
    }
    for(int i = n-1; i >= index; i--){
        if(str[i] == maxchar){
            swap(str[index], str[i]);
            if(ans < str) ans=str;
            cout<<str<<endl;
            solve(str, n,k,ans,index+1);
            swap(str[index],str[i]);
            cout<<"H = "<<str<<endl;
        }
    }

}


string ss (string &str, int k){
    int n = str.length();
    solve(str,n,k,ans,0);
    cout<< ans;
}
int main(){
    string str;
    cin >> str;
    int k;
    cin >> k;
    ss(str, k);
}