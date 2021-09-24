#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    int one = s.size();
    string ss = s;
    reverse(s.begin(), s.end());
    cout<<"s "<<s<<endl;
    cout<<"ss "<<ss<<endl;
    int arr[one+1][one+1];
    for(int i = 0; i < one+1; i++){
        for(int j = 0; j < one+1; j++){
            if(i == 0){
                arr[i][j] = 0;
            }
            if(j == 0){
                arr[i][j] = 0;
            }
        }
    }
    for(int i = 1; i < one+1; i++){
        for(int j = 1; j < one+1; j++){
            if(s[i-1] == ss[j-1]){
                arr[i][j] = 1+arr[i-1][j-1];
            }else{
                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);

            }            
        }
    }

        for(int i = 0; i < one+1; i++){
        for(int j = 0; j < one+1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<arr[one][one];
}