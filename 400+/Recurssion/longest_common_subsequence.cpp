#include<iostream>
using namespace std;

int lcs(string s1, string s2, int m, int n){
    if(m == 0 or n == 0){
        return 0;
    }
    if(s1[m-1] == s2[n-1]){
        return 1 + lcs(s1, s2, m-1, n-1);
    }else{
        max(lcs(s1,s2,m-1,n),
        lcs(s1, s2,m,n-1));
    }
}

int main(){
    string s1 = "axyz";
    string s2 = "baz";
    cout<<"s1 size"<<s1.size()<<endl;   
    cout<<"s2 size"<<s2.size()<<endl;
    cout<< lcs(s1,s2,s1.size(), s2.size());
}