#include<iostream>
using namespace std;
int main(){
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        int temp;
        cin >> temp;
        int count = 0;
        if (temp % 2 == 0){
            int medi = (((4 * (temp/2)) + 1 )+ (4 *((temp/2)-1) + 1))/2;
            for(int j = temp/2; j < temp; j++){
                    count += ((4 * j) + 1) - medi;
            }
        }else{
            int medi = (4*(temp/2)) + 1;
            for(int j = (temp/2)+1; j < temp;j++){
                count += ((4 * j) + 1) - medi;
            }
        }
        cout <<count <<endl;
    }
}