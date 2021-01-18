#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int arr[n]={};
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            arr[i] = temp;
        }
        int sum = 0;
        for(int i = 0; i < n; i++){
            // cout <<"i"<<arr[i]<<endl;
            sum += arr[i];
        }
        // cout << sum;
        if (sum == m){
            cout <<"YES"<<endl;
        }else{
            cout << "NO"<<endl;
        }
    }
}