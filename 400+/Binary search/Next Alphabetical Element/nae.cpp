#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>arr = {'a','b','c','d','e','f','g','h','i','j','k'};
    int start = 0;
    char tar = 'a';
    int end = arr.size() - 1;
    int res;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == tar){
            start = mid + 1;
        }else if (arr[mid] < tar){
            start = mid + 1;
        }else if (arr[mid] > tar){
            end = mid - 1;
            res = mid;
        }
    }
    cout<<arr[res];
}