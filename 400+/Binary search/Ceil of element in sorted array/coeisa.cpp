#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,2,3,4,7,8,9};
    int start = 0;
    int end = arr.size() - 1;
    int tar = 5;
    int res = 0;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] > tar){
            res = mid;
            end = mid - 1;
        }else if(arr[mid] < tar){
            start = mid + 1;
        }
    }
    cout<<arr[res];
}