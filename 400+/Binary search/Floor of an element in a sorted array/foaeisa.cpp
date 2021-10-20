#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,2,3,4,5,7,8,9};
    int start = 0;
    int end = arr.size() - 1;
    int tar = 6;
    int res ;
    while(start <= end){
        int mid = start +(end - start)/2;
        if(arr[mid] < tar){
            res = mid;
            start = mid + 1;
        }else if (arr[mid] > tar){
            end = mid - 1;
        }
    }
    cout<<arr[res];
}