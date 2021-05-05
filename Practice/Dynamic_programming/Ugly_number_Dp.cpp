#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>ugly(n);
    int two = 2;
    int three = 3;
    int five = 5;
    int i2 = 0, i3 = 0, i5 = 0;
    ugly[0] = 1;
    int uglyy = 0;
    if(n == 1){
        return 1;
    }
    for(int i = 1;i < n; i++){
        uglyy = min(two, min(three,five));
        ugly[i] = uglyy;
        if(uglyy == two){
           i2++;
           two = ugly[i2] * 2; 
        } if (uglyy == three){
            i3++;
            three = ugly[i3] * 3;
        } if (uglyy == five){
            i5++;
            five = ugly[i5] * 5;
        }
    }
    return uglyy;
    // int a[3] = {2,3,5};
    // int b[3] = {1,1,1};
    // ugly.push_back(1);
    // for(int i =1; i < n; i++){
    //     if(a[0]*ugly[b[0]] < a[1]*ugly[b[1]] && a[0]*ugly[b[0]] < a[2]*ugly[b[2]]){
    //         ugly.push_back(a[0]*ugly[b[0]]);
    //         b[0] += 1;
    //     }else if (a[1]*ugly[b[1]] < a[0]*ugly[b[0]] && a[1]*ugly[b[1]] < a[2]*ugly[b[2]]){
    //         ugly.push_back(a[1]*ugly[b[1]]);            
    //         b[1] += 1;
    //     }else if (a[2]*ugly[b[2]] < a[0]*ugly[b[0]] && a[2]*ugly[b[2]] < a[1]*ugly[b[1]]){
    //         ugly.push_back(a[2]*ugly[b[2]]);            
    //         b[2] += 1;
    //     }else if(a[0]*ugly[b[0]] == a[1]*ugly[b[1]] == a[2]*ugly[b[2]]){
    //         ugly.push_back(a[0] *ugly[b[0]]);
    //         b[0] += 1;
    //         b[1] += 1;
    //         b[2] += 1;
    //     }else if (a[0]*ugly[b[0]] == a[1]*ugly[b[1]]){
    //         ugly.push_back(a[1]*ugly[b[1]]);
    //         b[0]+= 1;
    //         b[1]+= 1;
    //     }else if (a[0]*ugly[b[0]] == a[2]*ugly[b[2]]){
    //         ugly.push_back(a[0]*ugly[b[0]]);
    //         b[0] += 1;
    //         b[1] += 1;
    //     }else if (a[1]*ugly[b[1]] == a[2]*ugly[b[2]]){
    //         ugly.push_back(a[1]*ugly[b[1]]);
    //         b[1]+= 1;
    //         b[2]+= 1;
    //     }
    // }
    // for(int i = 0;i < n; i++){
    //     cout <<i+1<<" -> "<<ugly[i]<<endl;
    //         }
}