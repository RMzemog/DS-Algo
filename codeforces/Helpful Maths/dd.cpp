#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int>vect;
    std::stringstream ss(s);

    for (int i; ss >> i;) {
        vect.push_back(i);    
        if (ss.peek() == ',')
            ss.ignore();
    }
    // for (int i = 0; i < vect.size(); i++){
    //     cout << vect[i]<<endl;
    // }
    sort(vect.begin(), vect.end());
    string dd;
    for (int i = 0; i<vect.size() - 1;i++){
        dd += to_string(vect[i]) + "+";
    }
    cout << dd ;
    cout<<vect[vect.size()-1];

}