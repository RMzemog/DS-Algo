#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int count = 0;
    while (x != 1){
        cout << "X"<< x<<endl;
        if (x % 5 == 0){
            x = x / 5;
        }else if (x % 4 == 0){
            x = x / 4;
        }else if (x % 3 == 0){
            x = x / 3;
        }else if (x % 2 == 0){
            x = x / 2;
        }else{
            x--;
        }
        count++;
    }    
    if (count == 1){
        cout << count;
    }
    else{
    cout << count+1;
    }
}