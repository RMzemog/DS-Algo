#include<iostream>
using namespace std;
int count(int arr[], int n, int  ans){
    if(n == 0){
        return ans == 0? 1: 0;
    }
    return count(arr,n-1, ans)+ count(arr, n-1, ans-arr[n-1]);
}

int main(){
    int arr[] = {10,5,2,3,6};
    int n = 5;
    int ans = 8;
    cout<< count(arr,n,ans);
}