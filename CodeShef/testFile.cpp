// #include<bits/stdc++.h>
// using namespace std;
// bool final = true;
// int display(int a[], int n){
//     bool done = true;
//     for(int i = 1; i <n; i++){
//         int ddddd = a[i-1] & a[i];
//         cout<<"eeeee"<<ddddd<<endl;
//            if (ddddd == 0){
//                cout<<"endss"<<endl;
//                done = false;
//                break;
//            }
//     if (done == true){
//         for(int i = 0; i < n; i++){
//             cout<<a[i]<<" ";
//         }
//     final = false;
//     cout<<endl;
//     return 0;
//     }
//     }
// }
// void findPermutations(int a[], int n){
//     sort(a, a+n);
//     if (final == false){
//         return;
//     }
//     cout << "Possible permutation are:\n";
//     do{
//         display(a, n);
//     }while(next_permutation(a, a+n));
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int d[n] = {};
//     for(int i = 0; i < n; i++){
//         d[i] = i+1;
//     }
//     findPermutations(d,n);
//     if (final == false){
//         return 0;
//     } 
// }

// int main(){
// int dd[3] = {1,2,3};
// next_permutation(dd, dd+3);
// sort(dd, dd+3);
// next_permutation(dd, dd+3);
// for(int i = 0; i < 3; i++){
//     cout<<dd[i]<<" ";
// }
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int d[n] = {};
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        d[i] = a;
    }
    do{
        for(int i = 0; i < n; i++){
            cout << d[i] << " ";
        }
        cout << endl;
    }while(next_permutation(d, d+n));
}