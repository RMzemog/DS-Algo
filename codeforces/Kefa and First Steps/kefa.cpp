#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n ;
    vector<int>v;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    // cout<<endl;
    // for(int i =0; i < n; i++){
    //     cout<<v[i];
    // }
    int max = 1;
    for(int i = 0; i <  n - 1; i++){
        int temp = 1;
        // cout<<"LOOP NO :" << i << "  INT :"<<v[i]<<endl;
        for(int j = i+1 ; j < n; j++){
            if (v[j] < v[j - 1]){
                break;
            }
        // cout<<"Inner for loop :"<<v[j] << endl;
            temp++;
        // cout<<"TEMP count"<<temp<<endl;
        }
        if (temp > max){
            max = temp;
        }
    }
    cout<<max;
}