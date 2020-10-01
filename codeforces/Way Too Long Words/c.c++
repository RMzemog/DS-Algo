#include<iostream>
#include<string>
using namespace std;
int main(){
    int d;
    cin >> d;
    for(int i = 0; i< d; i++){
        string s;
        cin >> s;
        if (s.size() <= 10){
            cout<<s<<endl;
        }else{
            cout << s[0] << s.size() - 2 <<s[s.size()-1]<<endl;
        }
    }
}