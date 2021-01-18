#include <bits/stdc++.h>
using namespace std;
// copied code hai samaj me ghanta kuch nhi aaya  
int main(){
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++){
        int n;
        cin >> n;
        int a[n];
        unordered_map<int, int> mp;
        int m = 0;
        int second =-1;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
            
            m = max(m, mp[a[i]]);
        }
        if (m == n){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
 
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[0])
            {
                second = i;
                break;
            }
        }
 
       
        for (int i = 1; i < n; i++)
        {  
            if (a[i] != a[0])
            {
                cout<<1<<" "<<i+1<<"\n";
            }
            else
            {
                cout<<second+1<<" "<<i+1<<"\n";
            }
                
        }
 
       
           
       
    }
}