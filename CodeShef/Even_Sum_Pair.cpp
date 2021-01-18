#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int a, b;
        cin >> a >> b;
        long count = 0;
        long even1 = 0;
        long even2 = 0; 
        long odd1 = 0;
        long odd2 = 0;
        if (a % 2 == 0){
            even1 = a/2;
            odd1 = a/2;
        }else{
            even1 = a/2;
            odd1 = (a/2)+1;
        }
        if (b % 2 == 0){   
            even2 = b/2;
            odd2 = b/2;
        }else{
            even2 = b/2;
            odd2 = (b/2) + 1;
        }
        count = (even1 * even2) + (odd1 * odd2);
        cout << count<< endl ;
        
    }
}



// #include<iostream>
// using namespace std;
// int main(){
//     int test;
//     cin >> test;
//     while (test--){
//         int a, b;
//         cin >>a >> b;
//         int count = 0;
//         if (a % 2 ==0 && b % 2 == 0){
//             count += ((a/2) * (b/2));
//             count += ((a/2) * (b/2));
//         }else if (a % 2 != 0 && b % 2 != 0){
//             count += ((((a+1)/2))  * (((b+1)/2)));
//             count += ((a/2)  * (b/2));
//         }else if (a % 2 != 0 && b % 2 == 0){
//             count += (a/2) * (b/2);
//             count += (((a+1)/2)) * (b/2);
//         }else if (a % 2 == 0 && b % 2 != 0){
//             // cout<< "chl rha hai :";
//             count += (a/2) * (b/2);
//             count += (a/2) * (((b+1)/2));
//         }
//         cout << count << endl;
//     }
// }