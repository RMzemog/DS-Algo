#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {11,12,15,18,2,5,6,8};
    int start = 0;
    int end = v.size() - 1;
    int peak = 0;
    int n = v.size();
    // while(start <= end){
    //     int mid = start + (end - start)/2;
    //     if((mid == 0 || v[mid - 1] <= v[mid]) && (mid == n - 1 || v[mid + 1] <= v[mid])){
    //         peak = mid;
    //         break;
    //     }else if (mid > 0 && v[mid - 1] > v[mid]){
    //         end = mid - 1;
    //     }else{
    //         start = mid +  1;
    //     }
    // }
    // cout<< peak<<endl;
    // start = 0;
    // end = v.size() - 1;
    int bottom = 0;
    while(start < end){
        int mid = start + (end - start)/2;
        if(v[mid] < v[end]){
            end = mid;
        }else{
            start = mid + 1;
        }

    }
    cout<<end;

}