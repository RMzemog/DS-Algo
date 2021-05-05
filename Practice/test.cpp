// #include<iostream>
// #include<vector>
// using namespace std;

// int main (){
//     int n;
//     cin >> n;
//     vector<int>v;
//     for (int i = 0; i < n; i++){
//         int dd;
//         cin >> dd;
//         v.push_back(dd);
//     }

//     int sum = 0;
//     for (int i =0; i < n; i++){
//         sum += v[i];
//     }
//     cout << sum;
// }
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>arr;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int mini = 0;
    int hola = INT_MAX;
    for(int i = 0; i < n; i++){
        mini = min(mini + arr[i] , mini);
        cout << mini <<" ";
        hola = min(mini, hola);
    }
    cout << hola;
}