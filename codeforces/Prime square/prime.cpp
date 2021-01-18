#include<iostream>

using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int d = n-1;
        int center = n/2;
        for(int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (j == i || j == d ){
                    cout << 1 << " ";
                }else if((n % 2 != 0) &&(i == center && j == 0) ||((n % 2 != 0) && (i == 0 && j == center))) {
                    cout <<1<<" ";
                    }else{
                    cout << 0 << " ";
                }
            }
            d--;
            cout << endl;
        }
    }
}