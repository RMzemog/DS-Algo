#include<iostream>
using namespace std;
int main(){
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int one = s1.size();
    int two = s2.size();
    int arr[one+1][two+1];
    for(int i = 0; i < one +1; i++){
        for(int j = 0; j < two+1; j++){
            if(i == 0){
                arr[i][j] = 0;
            }
            if(j == 0){
                arr[i][j] = 0;
            }
        }
    }
    for(int i = 1; i < one+1; i++){
        for(int j = 1; j < two+1; j++){
            if(s1[i-1] == s2[j-1]){
                arr[i][j] = 1+arr[i-1][j-1];
            }else{
                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);

            }
        }
    }
        for(int i = 0; i < one+1; i++){
        for(int j = 0; j < two+1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}