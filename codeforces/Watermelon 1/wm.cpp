#include<iostream>
using namespace std;
int main(){
    int d;
    cin >> d;
    if (d == 2){
        cout<<"NO";
    }
    else if (d % 2 == 0){
        cout <<"YES";
    }
    else{cout<<"NO";}
}