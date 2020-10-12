#include<iostream>
#include<vector>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 0; i < n; i++){
        int dd;
        cin >> dd;
        v.push_back(dd);
    }

    int sum = 0;
    for (int i =0; i < n; i++){
        sum += v[i];
    }
    cout << sum;
}