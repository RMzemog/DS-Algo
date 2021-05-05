#include<iostream>
using namespace std;
int main(){
    long test;
    cin >> test;
    while(test--){
        long b, w;
        cin >> b >> w;
        long bc, wc, z;
        cin >> bc >> wc >> z;
        long ans = 0;
        if(bc > wc + z){
            ans += (b + w) * wc;
            ans += b * z;
        }else if(wc > bc + z){
            ans += (b + w) * bc;
            ans += w * z;
        }else{
            ans += (b * bc) + (w * wc);
        }
        cout << ans << endl;
    }
}