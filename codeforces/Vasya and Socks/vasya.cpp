#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int t = 1;
    while (t <= n){
        if (t % m == 0){
            n++;
        }
        t++;
    }
    cout << n;
}

// int main(){
//     int n, m;
//     cin >> n >> m;
//     if (n < m){
//         cout << n;
//         return 0;
//     }
//     int count;
//     count = n;
//     while ((n/m) >= m){
//         count += n/m;
//         n = n/m;
//     }
// cout << count+1;
// }