#include<iostream>
#include<string>
using namespace std;
int main(){
    int d;
    cin >> d;
    string s;
    cin >> s;
    int dd = 0;
    for(int i = 1; i < d; i++){
        if (s[i] == s[i-1]){
            dd++;
        }
    }
    cout << dd;
}