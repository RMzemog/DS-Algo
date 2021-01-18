#include<iostream>
#include<vector>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int N, K;
        cin >> N >> K;
        vector<int>arr;
        for(int i = 1; i< N+1; i++){
            if(i % 2 == 0){
                arr.push_back(i * -(1));
            }else{
                arr.push_back(i);
            }
        }
        // for(int k = 0; k< N; k++){
        //     cout << arr[k];
        // }
        // cout <<endl;
    int pos;
    if (N % 2 == 0){
        pos = N/2;
    }else{
        pos = N/2;
        pos++;
    }
    // cout << "asdef "<< pos; 
    if (pos > K){
    int temp = pos - K;
    int i = arr.size();
    while (temp > 0 ){
        if (arr[i] > 0){
            arr[i] *= -1;
            temp -= 1; 
        }
        i -= 1;
    }
    }
    if (pos > K){
    int temp = pos - K;
    int i = N -1;
    while (temp >0 ){
        if (arr[i] > 0){
            arr[i] *= -1;
            temp -= 1; 
        }
    i -= 1;
    }
    }
    if (pos < K){
    int i = N -1 ;
    int temp = K - pos;
    while (temp > 0){
        if(arr[i] < 0){
            // cout <<"asdfd  "<< arr[i]; 
            arr[i] *= -1;
            temp -= 1;
        }
    i -= 1;
    }
    }
for(int j = 0; j < N; j++){
    cout << arr[j]<< " ";
}
cout << endl;
}
}