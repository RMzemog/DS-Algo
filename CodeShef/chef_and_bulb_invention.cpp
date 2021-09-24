// #include<iostream>
// using namespace std;
// int main(){
//     int test;
//     cin >> test;
//     while(test--){
//         int n, p, k;
//         cin >> n >> p >> k;
//         int zeros = ((n - 1)/k) + 1;
//         // cout << "zeroes => "<< zeros << endl;
//         cout << (zeros * (p % k)) + (p / k + 1)<<endl;
//     }
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int a,b,c,d,e,f;
        cin >> a >> b;
        cin >> c >> d;
        cin >> e >> f;
        if(a == c || a == e || b == d || b == f){
            if(c == a || c == e || d == b || d == f){
                if(e == a || e == c || f == d || f == b){
                    cout <<"YES"<<endl;
                }else{cout <<"NO"<<endl;}
            }else{cout<<"NO"<<endl;}
        }else{
            cout << "NO"<<endl;
        }
    }
}