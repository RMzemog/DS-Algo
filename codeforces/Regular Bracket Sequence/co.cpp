#include<iostream>
#include<string>
#include<vector>
using namespace std;

// int main(){
//     int test;
//     cin >> test;
//     while(test--){
//         string str;
//         cin >> str;
//         // cout << str.size();
//         vector<char>ch;
//         int n = 0;
//         for(int i = 0; i < str.size(); i++){
//             if(str[i] == '?'){
//                 if (ch.size() == 0){
//                     ch.push_back('(');
//                 }else{
//                     ch.pop_back();
//                 }
//             }else if(str[i] == '('){
//                 ch.push_back('(');
//             }else if (str[i] == ')'){
//                 if (ch.size() == 0){
//                     cout <<"NO"<<endl;
//                     n = 1;
//                     break;
//                 }else{ch.pop_back();}
//             }
//         }
//         if (ch.size() == 0 && n == 0){
//             cout << "YES"<<endl;
//         }

//         else if (n != 1) {
//             cout << "NO"<<endl;
//             }
//     }
// }

int main(){
    int test;
    cin >> test;
    while(test--){
        string str;
        cin >> str;
        if(str[0] != ')' && str[str.size()-1] != '(' && str.size() % 2 == 0){
            cout << "YES"<<endl;
        }else 
            cout << "NO"<<endl;

    }
}