#include<iostream>
using namespace std;
int ans = 0;
void rec(int n){
    if(n == 0 && ans < 10){
        return ;
    }
    if(n == 0){
       n = ans;
       ans = 0; 
    }
    ans += n%10;
    rec(n/10);
}
int main(){
    int n = 99999;
    rec(n);
    cout<<ans;
}