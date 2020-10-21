#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    vector<int>v;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout<<i << " -> "<<v[i] << endl; 
    }
    if (v.size() == m){
        cout<<"haere";
        cout << v[n - 1] - v[0];
    }else{
        cout<<"m"<< m <<endl;
        cout<<"n"<< n <<endl;
        cout <<"mss" << m + (n - m - 1) - 1 << endl;
        cout <<"nss" << n - m - 1 << endl;
        cout << v[m + (n - m - 1) - 1] - v[n - m - 1];
    }
}