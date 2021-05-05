// #include<iostream>
// #include<string>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n, k;
//         cin >> n >> k;
//         // string star ="";
//         string mains;
//         cin >> mains;
//         // for(int i = 0; i < k; i++){
//         //     star += "*";
//         // }
//         // if(mains.find(star) != string::npos){
//         //     cout << "YES"<<endl;
//         // }else{
//         //     cout <<"NO"<<endl;
//         // }
//         bool tempo = true;
//         for(int i =0; i<mains.size()-k+1; i++){
//             if(mains.substr(i,k) == star){
//                 cout << "YES"<<endl;
//                 tempo = false;
//                 break;
//             }
//         }
//         if (tempo == true){
//             cout << "NO"<<endl;
//         }
//     }
// }
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string star ="";
        string mains;
        cin >> mains;
        int count = 0;
        bool dona = true;
        for(int i = 0; i < mains.size(); i++){
            if (mains[i] == '*'){
                count++;
            }else{
                count = 0;
            }
            if (count >= k){
                cout << "YES"<<endl;
                dona = false;
                break;
            }
        }
        if (dona == true){
            cout << "NO"<<endl;
        }
    }
}
