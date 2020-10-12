#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    string s1;
    cin >> s >> s1;
    string ss;
    for(int i = s.size() - 1; i >= 0; i--){
        ss += s[i];
    }
    if (s1 == ss){
        cout <<"YES";
    }else{
        cout << "NO";
    }
}