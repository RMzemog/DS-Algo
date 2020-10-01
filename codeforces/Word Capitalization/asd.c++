#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    char ddd =  toupper(s[0]);
    cout << ddd;
    cout << s.substr(1, s.size());
}