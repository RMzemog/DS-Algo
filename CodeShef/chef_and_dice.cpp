#include<iostream>
using namespace std;
int main(){
    long test;
    cin >> test;
    while(test--){
        long dice_count;
        cin >> dice_count;
        long times = dice_count / 4;
        long remainder = dice_count % 4;
        long one = 20;
        long two = 36;
        long three = (2 * (6+5+4+3)) + (6+5+4);
        long four = 4 * (6+5+4);
        if(dice_count == 1){
            cout << one << endl;
        }else if (dice_count == 2){
            cout << two << endl;
        }else if (dice_count == 3){
            cout << three << endl;
        }else if (dice_count >= 4){
            if(remainder == 0){
                long ans = 4 * (5 + 6) * times;
                ans += 16;
                cout << ans << endl;
            }else if (remainder == 1){
                long ans = 4 *(6+5) * times;
                ans += 12 + 20;
                cout << ans << endl;
            }else if (remainder == 2){
                long ans = 4 * (6+5) * times;
                ans += 8 + two;
                cout << ans << endl;
            }else if (remainder == 3){
                long ans = 4 * (6+5) * times;
                ans += 4 + three;
                cout << ans << endl;
            }
        }
    }
}