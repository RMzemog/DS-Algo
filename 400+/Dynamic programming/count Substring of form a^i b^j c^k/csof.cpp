#include<iostream>
using namespace std;
int main(){
    string s = "abcabc";
    int a = 0;
    int ab = 0;
    int abc = 0;
    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        if(ch == 'a'){
            a = 2 * a + 1;
        }else if (ch =='b'){
            ab = 2 * ab + a;
        }else if (ch == 'c'){
            abc = 2 * abc + ab;
        }
    }
    cout<< abc;
}