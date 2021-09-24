#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    set<int>all;
    set<int>st;
    set<int>curr;
    for(int i = 0;i < n; i++){
        int x;
        cin >> x;
        st.insert(x);
    }
    for(int i = 2; i<m; i++){all.insert(i);}
    for(auto x:st){
        while(x%2==0){
            x/= 2;
            curr.insert(2);
        }
        for(int i = 3; i*i <=x; i+= 2){
            while(x%i == 0){
                x/=i;
                curr.insert(i);
            }
        }
        if(x>1)curr.insert(x);
    }
    for(auto x:curr){
        int y = x;
        while( y <= m){
            all.erase(y);
            y+=x;
        }
    }
    all.insert(1);
    int sz = (int)all.size();
    cout <<sz<<endl;
    for(auto x:all)cout<<x<<endl;
}