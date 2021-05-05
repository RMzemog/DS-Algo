#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n,m,x,y,a,b;
        cin >> n >> m;
        cin >> x >> y;
        cin >> a >> b;
        int thief = (n - x) + (m - y);
        int police = 0;
        if (b > a){
            police += m - b;
            a += (m - b); 
            b = m;
            police += n - a;
        }else if ( a > b){
            police += n - a;
            b += (n - a);
            a = n;
            police += m - b;
        }
        if(police == thief){
            if ((x == n || y == m) && (a == n || b == m)){
                cout << "YES"<<endl;
            }else{
                cout <<"NO"<<endl;
            }
        }else if (thief > police){
            cout << "NO"<<endl;
        }else {
            cout <<"YES"<<endl;
        }
    }
}