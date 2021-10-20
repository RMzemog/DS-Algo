#include<iostream>
using namespace std;
int main(){
    int arr[] = {30, 40, 45, 50, 45, 20, 26, 40, 80, 50, 30, 15, 10, 20, 40, 45, 71, 50, 55};
    int arrsize = 19;
    int mpist = 0;
    int leastsf = arr[0];
    int dpl[arrsize];
    dpl[0] = 0;
    for(int i = 1; i < arrsize; i++){
        if(arr[i] < leastsf){
            leastsf = arr[i];
        }
        mpist = arr[i] - leastsf;
        if(mpist > dpl[i-1]){
            dpl[i] = mpist;
        }else{
            dpl[i] = dpl[i-1]; 
        }
    }
    for(auto it:dpl){
        cout<< it<<" ";
    }
    cout<<endl;
    int mpibt = 0;
    int maxat = arr[arrsize - 1];
    int dpr[arrsize];
    dpr[arrsize - 1] = 0;
    for(int i = arrsize - 2; i >= 0; i--){
        if(arr[i] > maxat){
            maxat = arr[i];
        }
        mpibt = maxat - arr[i];
        if(mpibt > dpr[i + 1]){
            dpr[i] = mpibt;
        }else{
            dpr[i] = dpr[i+1];
        }
    }
    int op = 0;
    for(int i = 0; i < arrsize; i++){
        if(dpl[i] + dpr[i] > op){
            op = dpl[i] + dpr[i];
        }
    }
    cout<<op;
}