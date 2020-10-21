#include<iostream>
#include<vector>

using namespace std;

// int main(){
//     int n, target;
//     cin >> n >> target;
//     vector<int>even;
//     vector<int>odd;
//     for(int i = 1; i <= n; i++){
//         if (i % 2 == 0){
//             even.push_back(i);
//         }else if (i % 2 != 0){
//             odd.push_back(i);
//         }
//     }
//     // for(int i = 0; i < even.size(); i++){
//     //     cout<<"EVEN "<<even[i] << endl;
//     // }
//     if (target-1 < odd.size()){
//         cout<<odd[target - 1];
//     }else{
//         target = target - 1 - odd.size();
//         cout<<even[target];
//     }

// }


int main(){
    long long int n, target;
    cin >> n >> target;
    vector<int>v;
    long long int nhalf = n/2;
    // cout << nhalf;
    long long int even_count = nhalf;
    long long int odd_count = n - nhalf;
    // cout<<"even_count "<< even_count<<endl;
    // cout<<"odd_count"<<odd_count<<endl;
    if (target <= odd_count){
        // cout<<"odd";
        cout << 2 * target - 1;
    }else{
        target -= odd_count;
        cout << 2 * target;

    }
    
}