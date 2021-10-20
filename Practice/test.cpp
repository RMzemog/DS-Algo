#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int nums[] = {1,3,5,6};
    int target = 5;
    int low = 0;
    int high = 3;
    while(low <= high){
        int mid = low + (high - low)/2;
        if (target > nums[mid]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    cout<<low;
}