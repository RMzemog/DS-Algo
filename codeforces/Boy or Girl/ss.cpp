#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
    set<char>se;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++ ){
        se.insert(s[i]);
    }
    if (se.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout <<"IGNORE HIM!";
    }
}