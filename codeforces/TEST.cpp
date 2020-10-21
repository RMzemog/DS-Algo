#include<iostream>
#include<vector>
using namespace std;

// int gcd(int a, int b){
//         if (a == 0){
//         return b;
//     }
//         return gcd(b%a, a);
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int>v;
    
// }

int main(){
    int n;
    cin >> n;
    for(int i = n-1; i > 0; i--){
        // cout <<"I  -.>  "<< i<<endl;
        int d = 0; 
        int temp = 1;
        while (d <= n){
            // cout <<"TEMP -> "<< temp<<endl;
            d += temp * i;
            temp += temp;
            // cout <<"ddd -> "<< d << endl;
            if (d == n){
                cout << i<<endl;
                return 0;
            }
            // cout <<"D -> "<< d<<endl;
        }
    }
}