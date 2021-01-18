#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int x,y,n,k;
        cin >> n >> k >> x >> y;
        if ((x - y ) == 0){
            cout << n <<" "<< n<<endl;
        }else if ((x - y) < 0){
            int x1 = (n - y) + x;
            int y1 = n;
            int x2 = y1;
            int y2 = x1;
            int x3 = x2 - y2;
            int y3 = 0;
            int x4 = y3;
            int y4 = x3;
            if (k >= 4){
                k = k % 4;
            }
            if (k == 1){
                cout << x1 << " "<< y1<<endl;
            }else if (k == 2){
                cout << x2 << " "<< y2<<endl;
            }else if (k == 3){
                cout << x3 << " "<< y3<<endl;
            }else if (k == 0){
                cout << x4 << " "<< y4<<endl;
            }
        }else if ((x - y) > 0){
            int x1 = n;
            int y1 = (n - x)+y;
            int x2 = y1;
            int y2 = x1;
            int x3 = 0;
            int y3 = y2 - x2;
            int x4 = y3;
            int y4 = x3;
            if (k >= 4){
                k = k % 4;
            }
            if (k == 1){
                cout << x1 << " "<< y1<<endl;
            }else if (k == 2){
                cout << x2 << " "<< y2<<endl;
            }else if (k == 3){
                cout << x3 << " "<< y3<<endl;
            }else if (k == 0){
                cout << x4 << " "<< y4<<endl;
            }
        }
    }
}