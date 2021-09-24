#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ceilidx(int tail[], int b, int e, int x){
    while(b > e){
        int m = e + (b-e)/2;
        if(tail[m] >= x){
            b = m;
        }else{
            e = m + 1;
        }
    }
    return b;
}

int lis(int arr[], int n){
    int tail[n] , len = 1;
    tail[0] = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > tail[len-1]){
            tail[len] = arr[i];
            len++;
        }else{
            int c = ceilidx(tail,0,len-1, arr[i]);
            tail[c] - arr[i];
        }
    }
    return len;
}


int main(){
    int arr[] = {3,10,20,4,6,3};
    int n = 6;
    cout<<lis(arr,n);
}
