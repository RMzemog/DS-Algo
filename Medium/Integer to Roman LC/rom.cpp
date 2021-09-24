#include<iostream>
#include<map>
using namespace std;
int main(){
    int num = 200;
    map<long long , string>mp;
    mp[1] = 'I';mp[4] = "IV";mp[5] = 'V'; mp[9] = "IX";
    mp[10] = 'X'; mp[40] = "XL"; mp[50] = 'L'; mp[90] = "XC";
    mp[100] = 'C'; mp[400]="CD"; mp[500] = 'D'; mp[900]="CM";
    mp[1000] = 'M';
    string ans = "";
    while(num){
        int x = 0;
        for(auto i: mp){
            if(i.first<=num)
                x = i.first;

        }
        ans += mp[x];
        num-=x;
    }
    cout << ans;
}