#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {5,10,30,20,40};
    int tar = 40;
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(tar == arr[mid]){
            cout<<mid;
            break;
        }else if(mid - 1>= start && arr[mid - 1] == tar){
            cout<< mid - 1;
            break;
        }else if(mid + 1 <= end && arr[mid + 1] == tar){
            cout<< mid + 1;
            break;
        }
        else if(tar > arr[mid]){
            start = mid + 2;
        }else if (tar < arr[mid]){
            end = mid - 2;
        }
    }
}