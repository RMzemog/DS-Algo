#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        string bits;
        cin >> bits;
        vector<char>first = {'a','b','c','d','e','f','g','h'};
        vector<char>second = {'i','j','k','l','m','n','o','p'};
        vector<char>final;
        vector<int>spilts;
        int d = 8;
        for(int i = 0; i < n; i++){
            if(i%4 != 0){
                // cout <<"ii"<<i<<bits[i]<<endl;
            if (bits[i] == '0'){
                     d = d/2;
                
            }else if (bits[i] == '1'){
                    if (d == 8){
                        d = 4;
                    }else{
                     d = d/2;
                    }
            }
        }else{
            // cout <<"i"<<i<<bits[i]<<endl;
            if (i != 0){
                cout <<"ddd "<< d;                
                d = 8;

            }
            if (bits[i] == '0'){
                final = first;
            }else{
                final = second;
            }
            }
        }
    }
}