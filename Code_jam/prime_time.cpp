#include<iostream>
#include<vector>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        vector<int>arr;
        for(int i = 0; i < n; i++){
            int a, b;
            cin >> a >> b;
            for(int j = 0; j<b; j++){
                arr.push_back(a);
            }
        }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] <<" ";
    }
    }
}