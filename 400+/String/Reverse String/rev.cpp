#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void ulat_palat(vector<char>& ch){
    int end = ch.size() - 1;
    int start = 0;
    while(start<=end){
        swap(ch[start++],ch[end--]);
    }
}
int main(){
    vector<char>ch = {'a','b','c','d','e','f'};
    ulat_palat(ch);
    for(int i = 0; i < ch.size(); i++){
        cout << ch[i]<<" ";
    }
}