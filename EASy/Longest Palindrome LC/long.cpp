#include<map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char, int>m;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        m[s[i]]++;
    }
    for(auto i : m){
        cout<< i.first <<" " << i.second<<endl;
    }
    int ans = 0;
    int one = 0;
    int total_odd = 0;
    int sum_odd = 0;
    for(auto i : m){
        if(i.second % 2 != 0){
            if(i.second == 1){
            one ++;
            }
            else{
                total_odd++;
                sum_odd += i.second;
            }
        }else{
            ans += i.second;
        }
    }
    cout <<"Ans => "<< ans<<endl;
    cout <<"One => "<<one<<endl;
    cout <<"Total_one =>"<<total_odd<<endl;
    cout <<"sum_odd =>"<<sum_odd<<endl;
    cout <<"total_odd =>"<<total_odd<<endl;
    if (total_odd >= 1){
        cout << ans + (sum_odd - (total_odd - 1));
    }
    else{
        if (one > 0){
            cout << ans + 1;
        }else{
            cout << ans;
        }
    }
}


