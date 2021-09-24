#include<iostream>
using namespace std;
void toh(int n, int one , int two, int three){
    if(n == 0){
        return;
    }
    toh(n-1, one, three, two);
    cout<<n <<"||"<<" "<<one<<" -> "<<two<<endl;
    toh(n-1, three, two, one);
}

int main(){
    int n = 3;
    int one = 1;
    int two = 2;
    int three = 3;
    toh(n, one, two, three);
}