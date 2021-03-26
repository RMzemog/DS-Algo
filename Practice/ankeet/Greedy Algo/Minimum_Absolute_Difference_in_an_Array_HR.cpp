// #include<iostream>
// #include<vector>
// #include<cstdlib>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin >>n;
//     vector<int>arr;
//     for(int i = 0; i < n; i++){
//         int temp;
//         cin >>temp;
//         arr.push_back(temp);
//     }
//     int mini = abs(arr[0] - arr[1]);
//     for(int i = 0; i < n-1; i++){
//         for(int j = i+1; j < n; j++){
//             if (i == j){
//                 continue;
//             }else{
//                 mini = min(abs(arr[i] - arr[j]),mini);
//             }
//         }
//     }
//      cout << mini;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// #include<cstdlib>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     vector<int>arr;
//     for(int i = 0; i < n; i++){
//         int temp;
//         cin >>temp;
//         arr.push_back(temp);
//     }
//     sort(arr.begin(), arr.end());
//     int minimum = INT_MAX;
//     for(int i = 0; i < n-1; i++){
//         minimum = min(abs(arr[i] - arr[i+1]), minimum);
//     }
//     cout << minimum;

// }
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end(),greater<int>());
    long long sums = 0;
    for(int i = 0 ;i< n; i++){
        sums += pow(2,i) * arr[i];
    }
    cout << sums;
}
