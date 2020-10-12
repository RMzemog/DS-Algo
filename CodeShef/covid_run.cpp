#include<iostream>
using namespace std;

int main(){
    int d;
    cin >>d;
    int N, K, X, Y;
    for(int i = 0; i < d; i++){
        cin >> N >> K >> X >> Y;
        bool d = false;
        for(int j = 0; j< N; j++){
            X = (X+K)%N;
            if(X == Y){
                d = true;
                break;
            }
        }
        if ( d == true){
            cout << "YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}