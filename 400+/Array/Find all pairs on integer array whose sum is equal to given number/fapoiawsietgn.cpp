#include<map>
#include<vector>
#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
    int k = 16;
    int c = 0;
    vector<int>arr{8,8,8,8};
    map<int, int>mp;
    for(int i = 0; i < arr.size(); i++){
        int x = k - arr[i];
        if(mp[x] == 0){
            mp[arr[i]]++;
        }else{
            c += mp[x];
            mp[arr[i]]++;
        }
    }
    cout<<c;
}