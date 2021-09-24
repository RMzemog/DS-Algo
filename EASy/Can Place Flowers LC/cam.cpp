#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>flowerbed = {0,0,0,0,1};
    int n = 1;
    // if (flowerbed.size() < 3){
    //     if (n > 1){
    //         return false;
    //     }else if (n == 0){
    //         return true;
    //     }else{
    //         if(flowerbed.size() == 2){
    //         if (n == 1 && flowerbed[0] == 0 && flowerbed[0] == 0){
    //             return true.;
    //         }else{
    //             return false;
    //         }
    //         }else if (flowerbed.size() == 1){
    //             if (n == 1 && flowerbed[0] == 0){
    //                 return true;
    //             }else{
    //                 return false;
    //             }
    //         }
    //     }
    // }
    if(flowerbed[0] == 0 && flowerbed[1] == 0 && (flowerbed[2] == 1 || flowerbed[2] == 0)){
        flowerbed[0] = 1;
        cout <<"asdf";
        n--;
    }
    for(int i = 1; i < flowerbed.size()-1; i++){
        if (flowerbed[i-1] == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0){
            flowerbed[i] = 1;
            n--;
        }
    }
    if(flowerbed[0] == 0 && flowerbed[1] == 0 && flowerbed[2] == 1){
        flowerbed[0] = 1;
        n--;
    }
    if(flowerbed[flowerbed.size() - 3] == 1 && flowerbed[flowerbed.size() - 2] == 0 && flowerbed[flowerbed.size() - 1] == 0){
        flowerbed[flowerbed.size() - 1] = 1;
        n--;
    }
    for(int i = 0; i < flowerbed.size(); i++){
        cout << flowerbed[i]<<" ";
    }
    if(n < 1){
        return true;
    }else{
        return false;
    }
}