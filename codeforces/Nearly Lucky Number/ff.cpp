// 4 , 7 lucky numbers 
// count of lucky numbers should be either 4 or 7


#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count = 0;
    int dd = 99;
    char four = '4';
    char seven = '7';
    for (int i = 0; i < s.size(); i++){
        if (s[i] == four || s[i] == seven){
            count++;
            // cout <<"count"<<count<<endl;
        }
    }
    if (count == 4 || count == 7){
        cout <<"YES";
    }else{
        cout <<"NO";
    }

}