#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    if (s.find("H") != std::string::npos || s.find("Q") != std::string::npos || s.find("9") != std::string::npos){
        cout << "YES";
    }else{ cout <<"NO";}
}
