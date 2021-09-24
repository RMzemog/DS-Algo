#include<iostream>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n; 
        cin >> n;
        int three = 0;
        int five = 0;
        while( n > 2){
            if ( n % 3 == 0){
                three = n / 3;
                n = 0;
                break;
            }else if (n >= 5){
                n -= 5;
                five++;
            }
        }
        if (n != 0){
            cout <<-1<<endl;
        }else{
            for(int i = 0; i<three * 3; i++){
                cout <<"5";
            }for(int i = 0; i<five * 5; i++){
                cout<<"3";
            }
            cout <<endl;
        }
    }
}