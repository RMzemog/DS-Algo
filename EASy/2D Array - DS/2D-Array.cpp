// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>>arr;
//     for(int i = 0; i < 6; i++){
//         vector<int>dummy;
//         for(int j = 0; j < 6; j++){
//             int temp;
//             cin >> temp;
//             dummy.push_back((temp));
//         }
//         arr.push_back(dummy);
//     }
//     int ans = 0;
//     // int point1 = 0;
//     // int point2 = 0;
//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             int sum = 0;
//             sum += arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2] ;
//             // cout <<endl;
//             // cout << sum << endl;
//             // cout << arr[i][j] <<" "<< arr[i][j+1]<<" "<<arr[i][j+2]<<endl;
//             // cout<< arr[i+1][j+1]<<endl;
//             // cout << arr[i+2][j] <<" "<< arr[i+2][j+1]<<" "<<arr[i+2][j+2]<<endl;
//             if (j == 0 && i == 0){
//                 ans = sum;
//             }else{
//                 ans = (ans > sum) ? ans : sum;
//             }
//         }
//     }
//         cout <<ans;
// }
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<vector<int>>arr;
    int lastans=0;

    for(int i=0;i<q;i++)
    {
        int a,x,y;
        cin>>a>>x>>y;

        // if(a==1)
        // {
        //     int t=(x^lastans)%10;
        //     arr[t].push_back(y);
        // }
        // else if(a==2)
        // {
        //     int t=(x^lastans)%10;
        //     int w=y%arr[t].size();
        //     lastans=w;
        //     cout<<lastans;
        // }
    }
}