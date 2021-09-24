#include<iostream>
using namespace std;

int max_pieces(int n, int a, int b, int c){
    if(n == 0) return 0;
    if(n < 0) return -1;
    int res = max(max_pieces(n-a, a, b, c),max(max_pieces(n-b, a, b, c),max_pieces(n-c, a, b, c)));
    if(res == -1){
        return -1;
    }
    return res+1;
}


int main(){
    int n = 23;
    int a = 11, b = 9, c = 12;
    cout<< max_pieces(n, a, b, c);
}