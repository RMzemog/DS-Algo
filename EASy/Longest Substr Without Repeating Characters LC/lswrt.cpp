#include<iostream>
#include<map>
using namespace std;
int main(){
    string s = "abcabcbb";
    map<char, int>map;
    int i = -1;
    int j = -1;
//    while(true){
    cout <<"s "<< s.size() - 1<<" i "<< i;
    if (s.size() - 1 == 7){
        cout <<"chota ";
    }
        while(i < s.size() - 1){
            i++;
            char ch = s[i];
            map[ch]++;
            cout << "sds";
        }
 //   }
    for(auto  k: map){
        cout << k.first <<" => "<<k.second<<endl;
    }
}