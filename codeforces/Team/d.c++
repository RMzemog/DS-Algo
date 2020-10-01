#include<iostream>
using namespace std;
int main(){
    int d;
    int e = 0;
    cin >>d;
    for (int i = 0; i < d; i++){
        int a , b, c;
        cin >> a >> b >> c;
        if (a == 1 && b == 1){
            e++;
        }else if (b == 1 && c == 1){
            e++;
        }else if (a == 1 && c == 1){
            e++;
        }
    }
    cout << e;
}