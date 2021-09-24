#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int lis(vector<int>d){
    vector<int>d2(d.size());
    d2[0] = 1; 
    for(int i = 1; i < d.size(); i++){
        int maxa = 0;
        for(int j = 0; j < i; j++){
            if(d[j] < d[i]){
                if(d2[j] > maxa) maxa = d2[j];
            }
        }
        d2[i] = maxa + 1;
    }
    // cout<<"s"<<endl;
    // for(auto it: d2){
    //     cout<<it<<" ";
    // }
    return *max_element(d2.begin(), d2.end());
}

int main(){
    vector<pair<int,int>>s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp1, temp2;
        cin >> temp1 >> temp2;
        pair<int, int>d = make_pair(temp1,temp2);
        s.push_back(d);
    }
    sort(s.begin(), s.end());
    for(auto it: s){
        cout<< it.first <<" "<<it.second<<endl;
    }
    vector<int>ss;
    for(auto it: s){
        ss.push_back(it.second);
    }
    cout<<endl;
    // for(auto it: ss){
    //     cout<< it<<" ";
    // }
    cout<<lis(ss);
}
