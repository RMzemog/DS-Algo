#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int one = 0;
        int two = 0;
        int zero = 0;
        map<int,int>mp;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            if(temp%3 == 0){
                zero++;
            }else if (temp% 3 == 1){
                one++;
            }else if (temp % 3 == 2){
                two++;
            }
        }
        cout<<"0 "<<zero<<endl<<"1 "<<one<<endl<<"2 "<<two<<endl;
        int avg = (zero+one+two)/3;
        int small = min(zero, min(one,two));
        int big = max(zero, max(one,two));
        int ans = 0;
        if(small == avg){
            cout<<"0"<<endl;
            continue;
        }else{
            if(zero < avg){
                if(one > avg){
                    ans += (one - avg) * 2;
                    zero += one - avg;
                    one = avg;
                }
                if(two > avg){
                    ans += (two - avg);
                    zero += (two - avg);
                    two = avg;
                }
            }if(one < avg){
                if(zero > avg){
                    ans += (zero - avg);
                    one = zero - avg;
                    zero = avg;
                }
                if(two > avg){
                    ans += (two - avg) * 2;
                    one = two - avg;
                    two = avg;
                }
            }if (two < avg){
                if(zero > avg){
                    ans += (zero - avg) * 2;
                    two = zero - avg;
                    zero = avg;
                }
                if(one > avg){
                    ans += (one - avg);
                    two = one - avg;
                    one = avg;
                }
            }
        }
        // cout<<zero<<" "<<one <<" "<<two<<endl;
        cout<< ans<<endl;
    }
}