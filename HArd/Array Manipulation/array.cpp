// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int n,q;
//     cin>>n>>q;
//     vector<vector<int>>arr(n);
//     int lastans=0;
//     for(int i=0;i<q;i++)
//     {
//         int a,x,y;
//         cin>>a>>x>>y;

//         if(a==1)
//         {
//             int t=(x^lastans)%10;
//             arr[t].push_back(y);
//         }
//         else if(a==2)
//         {
//             int t=(x^lastans)%10;
//             cout <<"y => "<< y <<"  "<< arr[t].size()<< endl;
//             int w=y%arr[t].size();
//             lastans=w;
//             cout<<lastans<<endl;
//         }
//     }
// }
// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<string>arr;
//     int n; 
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         string s;
//         cin >> s;
//         arr.push_back(s);
//     }
//     int q;
//     cin >> q;
//     for(int i = 0; i < q; i++){
//         string s;
//         cin >> s;
//         int ss = count(arr.begin(), arr.end(), s);
//         cout << ss << endl;
//     }
// }
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int>arr(n,0);
    for(int i = 0; i < m; i++){
        int a,b,k;
        cin >>a >> b >> k;
        for(int j = a-1; j < b;j++){
            arr[j] += k;
        }
    for(auto& it : arr){
        cout << arr[i]<<" ";
    }
    cout << endl;
    }
    cout << *max_element(arr.begin(), arr.end());    
}