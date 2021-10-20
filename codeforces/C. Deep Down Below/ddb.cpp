#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int t;{
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int>>power(n);
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            vector<int>p(x);
            int mxp = -1;
            for(int j = 0; j < x; j++){
                cin >> p[j];
                mxp = max(mxp, p[j] - j + 1);
            }
            power[i] = make_pair(mxp, x);
        }
    sort(power.begin(), power.end());
    int l = power[0].first, r = power[n-1].first;
    int ans = INT_MAX;
    while(l <= r){
        int mid = (l+r)/2;
        int curr = mid;
        bool ok = 1;
        for(int i = 0; i < n; i++){
            if(curr >=power[i].first){
                curr+=power[i].second;
            }else{
                ok = 0;
                break;
            }
        }
        if(ok){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    cout<< ans<<endl;
}
    }
}