#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr ={1,3,8,12,4,2};
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end){
       int mid = start + (end - start)/2;
        if((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == arr.size() - 1 || arr[mid + 1] <= arr[mid])){
            cout<<arr[mid];
            break;
        }else if(mid > 0 && arr[mid - 1] > arr[mid]){
            end = mid -1;
        }else{
            start = mid + 1;
        } 
    }
}