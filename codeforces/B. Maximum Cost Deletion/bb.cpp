#include<iostream>
#include<vector>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int ans = 0;
        if(b >= 0){
            ans = (a + b)*n;
        }else{
            int c = 1;
            for(int i = 1; i < n; i++){
                if(s[i] != s[i-1]){
                    c++;
                }
            }
                ans = (c/2 +1)*b+a*n;
        }
        cout<< ans<<endl;
    }
}