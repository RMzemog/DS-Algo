#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0]) - 1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i = 0; i < n; i ++){
        cout << arr[i] <<" ";
    }
}