#include <iostream>
#include<math.h>
#include<vector>
#include<bits/stdc++.h>
#include<string>
using namespace std;

// int main() {
//     int z;
//     cin>>z;
//     int i;
//     int result[z];
//     for(i=0;i<z;i++)
//     {
//         int a,b;
//         int arr[a];
//         for(i=0;i<2;i++)
//         {
//             if(i=0)
//             {
//                 cin>>a;
//             }
//             else

//             {
//                 cin>>b;
//             }
//         }
//         for(i=0;i<a;i++)
//         {
//             int c;
//             cin>>c;
//             arr[i]=c;
//         }
//         int risk=0, nrisk = 0;
//         for(i=0;i<a;i++)
//         {
//             if((arr[i]<=9) || (arr[i]>=80))
//                 {
//                 risk++;}
//             else
//                 {nrisk++;
//                 }
//         }
//     result[i]= (ceil(risk/b)+ceil(nrisk/b))    ;
//     cout<<(ceil(risk/b)+ceil(nrisk/b));
//     }
//     for(i=0;i<sizeof(result);i++)
//     {
//         cout<<result[i];
//     }
//     return 0;
// }
int main() {
    string ss;
    int xx = 0;
    string s = "";
    while(xx != 100){
        getline (cin, ss);
        s+=ss;
    }
    int c = 0;
    int o = 0;
    int v = 0;
    int ii = 0;
    int d = 0;
    // cout << s;
    for(int i = 0; i < s.size(); i++){
        // cout <<"i"<<s[i]<<endl;
        if(s[i] == 'c'){
            c++;;
        }else if(s[i] == 'o'){
            o++;
        }else if(s[i] == 'v'){
            v++;
        }else if(s[i] == 'i'){
            ii++;
        }else if(s[i] == 'd'){
            d++;
        }
    }
    // cout <<"c"<<c<<endl;
    // cout <<"o"<<o<<endl;
    // cout <<"v"<<v<<endl;
    // cout <<"i"<<ii<<endl;
    // cout <<"d"<<d<<endl;
    int mina =  min({c,o,v,d,ii});
    cout << mina;
}