#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, m;
        cin >> n >> m;
        vector<int>ni;
        vector<int>mi;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            ni.push_back(temp);
        }
        for(int i = 0; i < m; i++){
            int temp;
            cin >>temp;
            mi.push_back(temp);
        }
        int sumn = accumulate(ni.begin(), ni.end(), 0);
        int summ = accumulate(mi.begin(), mi.end(), 0);
        cout <<"N sum = "<< sumn <<endl; 
        cout <<"M sum = "<< summ<<endl;
        if (sumn > summ){
            cout << 0 << endl;
        }else{
            sort(ni.begin(), ni.end());
            sort(mi.begin(), mi.end(), greater<int>());
            for(int i = 0; i < m; i++){
                if(ni[i]){
                    if(ni[i] < mi[i]){
                        int temp = ni[i];
                        ni[i] = mi[i];
                        mi[i] = temp;
                    }
                    int sumn1 = accumulate(ni.begin(), ni.end(), 0);
                    int summ1 = accumulate(mi.begin(), mi.end(), 0);
                    if (sumn1 > sumn1){
                        cout << "Balaced "<< i+1<<endl;
                    }
                }
            }
        }
        for(int i = 0; i < n; i++){
            cout << ni[i]<<" ";
        }
        cout << endl;
        for(int i = 0; i < m; i++){
            cout << mi[i]<<" ";
        }
        cout << endl;
    }
}