#include<iostream>
using namespace std;
int main(){
    int n, h, x;
    cin >> n >> h >> x;
    bool done = false;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if (x + temp >= h){
            done = true;
        }
    }
    if (done == true){
        cout << "YES";
    }else{
        cout << "NO";
    }
}