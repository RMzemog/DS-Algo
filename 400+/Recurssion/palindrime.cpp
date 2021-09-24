#include<iostream>
using namespace std;

bool rec(string s, int start, int end){
    if(start >= end){
        return true;
    }
    return s[start] != s[end] && rec(s, start + 1, end-1);
}

int main(){
    string s = "abba";
    int start = 0; 
    int end = s.length() - 1;
    cout << rec(s, start, end);
}