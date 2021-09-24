#include<iostream>
using namespace std;
bool isValid(string s, int l, int h, int count){
    if(count > 1){
        return false;
    }
    while(l < h){
        if(s[l] == s[h]){
            l++;
            h--;
        }   else
        return isValid(s, l+1, h, count+1)||isValid(s, l, h-1,count+1);
}
return true;
}

bool validPalindrome(string s){
    int l = 0;
    int h = s.size() - 1;
    return isValid(s,l,h,0);
}