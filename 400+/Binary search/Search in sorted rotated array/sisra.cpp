#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {11,12,15,16,18,2,5,6,8};
    int start = 0;
    int end = arr.size() - 1;
    int pivot = 0;
    int tar = 8;
    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] < arr[end]){
            end = mid;
        }else{
            start = mid+1;
        }
    }
    pivot = start;
start = 0;
  end = pivot - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == tar){
            cout<<mid;
            break;
        }else if (arr[mid] < tar){
            start = mid + 1;
        }else{
            end = mid -1;
        }
    }
    start = pivot;
    end = arr.size() -1 ;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == tar){
            cout<<mid;
            break;
        }else if (arr[mid] < tar){
            start = mid + 1;
        }else{
            end = mid -1;
        }
    }
}