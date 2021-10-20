#include<iostream>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int c = 1;
        int arr[n][n] = {0};
        if(n == 1){
            cout<<1<<endl;
        }else if (n == 2){
            cout<< -1<<endl;
        }else{
            for(int i = 0; i < n; i++,c++){
                arr[i][i] = c;
            }
            for(int i = 1; i < n; i++){
                for(int j = 0; j < i; j++, c+=2){
                    arr[j][i] = c;
                    arr[i][j] = c+1;
                }
            }
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
}