#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    string zero = "0000000";
    string one = "1111111";
    string temp;
    // string temp = s.substr(0,7);
    // cout<<temp<<endl;
    if (s.size() < 7){
        cout<<"NO";
        return 0;
    }
    for(int i = 0; i < s.size() - 6; i++){
        temp = s.substr(i,i+7);
    if (temp.find(zero) != string::npos || temp.find(one) != string::npos){
        cout<<"YES"<<endl;
        return 0;
    }
    }
    cout<<"NO";
}