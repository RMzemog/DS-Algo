#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int mains(){
    int n;
    cin >> n;
    bool done = true;
    int d[n] = {};
    for (int i = 0; i < n; i++){
        d[i] = i+1;
    }
        sort(d, d+n);
    do{
    done = true;
    for(int i = 1; i <n; i++){
        int ddddd = d[i-1] & d[i];
           if (ddddd == 0){
               done = false;
               break;
           }
    }
    if (done == true){
        for(int i = 0; i < n; i++){
            cout<<d[i]<<" ";
        }
        cout<<endl;
        return 0;
    }
    }while(next_permutation(d, d+n));
    if (done == false){
        cout<< -1<<endl;
    }
}

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        mains();
    }
}