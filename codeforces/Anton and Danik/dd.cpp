#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a = 0;
    int d = 0;
    for(int i = 0; i < t; i++){
        char temp;
        cin >> temp;
        if (temp == 'D'){
            d++;
        }else if (temp == 'A'){
            a++;
        }
    }
    if (d == a){
        cout << "Friendship";
    }else if (a  < d){
        cout << "Danik";
    }else{
        cout << "Anton";
    }
}