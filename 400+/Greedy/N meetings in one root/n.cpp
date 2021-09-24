#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 6;
    vector<pair<int,int>>p(n);
    vector<int>start = {1,3,0,5,8,5};
    vector<int>end = {2,4,6,7,9,9};
    for(int i = 0; i < n; i++){
        p[i] = make_pair(end[i],start[i]);
    }
    sort(p.begin(),p.end());
    for(auto it:p){
        cout <<"("<<it.second<<" , "<<it.first<<")"<<endl;
    }
    int maxa = 0;
    int dax = 1;
    int last = p[0].first;
    for(int i = 1; i < n; i++){
        if(p[i].second >= last){
            dax+=1;
            last = p[i].first; 
        }
    }
    cout <<"Most => "<<dax;
}