#include<iostream>
#include<vector>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n,k,d;
        cin >> n >> k >> d;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int jj;
            cin >> jj;
            sum += jj;
        }
        if(sum < k){
            cout << 0 << endl;
        }else{
            int count = sum/k;
            if (count > d){
                cout << d << endl;
            }else{
                cout << count<<endl;
            }
        }
    }
}