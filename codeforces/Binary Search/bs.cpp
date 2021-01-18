#include<iostream>
const int MOD = 1e9 + 7;
using namespace std;
int main(){
    int x, n , pos;
    cin >> n >> x >> pos;
    int greater = n - x;
    int lower = x - 1;
    int st = 0;
    int dr = n;
    int ans = 1;
    while (st < dr){
        int mid = (st + dr)/2;
        if (mid < pos){
            ans = 1LL * ans * lower % MOD;
            lower--;
            st = mid +1;
        }else if(mid == pos){
            ans = ans;
            st = mid + 1;
        }else{
            ans = 1LL * ans * greater % MOD;
            greater--;
            dr = mid;
        }
    }
    lower += greater;
    while(lower > 0){
        ans = 1LL * ans * lower % MOD;
        lower--;
    }
    cout << ans<< endl;
}