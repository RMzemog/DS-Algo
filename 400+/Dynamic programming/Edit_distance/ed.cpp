#include<iostream>
using namespace std;
int main(){
    string str1 = "sunday";
    string str2 = "saturday";
    int arr[str1.size()+1][str2.size()+1];
    for(int i = 0; i < str1.size()+1; i++){
        for(int j = 0; j < str2.size()+1; j++){
            if(i == 0){

                arr[i][j] = j;
            }else if ( j == 0){
                arr[i][j] = i;}
            else{
                if(str1[i-1] == str2[j-1]){
                    arr[i][j] = arr[i-1][j-1];
                }else{
                    int f1 = 1 + arr[i-1][j-1];
                    int f2 = 1 + arr[i-1][j];
                    int f3 = 1 + arr[i][j-1];
                    arr[i][j] = min(f1, min(f2, f3));
                }
            }
        }
    }


    for(int i = 0; i < str1.size(); i++){
        for(int j = 0; j < str2.size(); j++){
            cout<< arr[i][j]<<" ";
        }
        cout<< endl;
    }
}