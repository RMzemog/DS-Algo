#include<map>
#include<iostream>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        map<long long, long long>mp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x-i]++;
        }
        long long total = 0;
        for(auto it: mp){
            total +=(it.second)*(it.second-1)/2;
        }
        cout<<total<<endl;
    }
}