#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        string bits;
        cin >> bits;
        vector<char>first = {'a','b','c','d','e','f','g','h'};
        vector<char>second = {'i','j','k','l','m','n','o','p'};
        string ans ="";
        vector<char>done = vector<char>(first.begin()+2,first.end() + 4);
        cout << done[1];
        // for(int i = 0; i < n; i+= 4){
        //     string final = bits.substr(i, i+4){
        //         int d = 0;
        //         if (final[0] == '0'){
        //             vector<char>tst = first;
        //             int t2 = 1;
        //             while(t2 < 4){
        //                 if (final[t2] == '1'){
        //                     tst = tst[tst/2:tst.size()-1];
        //                 }else if(final[t2] == '0'){
        //                     tst = tst[0:tst/2]
        //                 }
        //                 t2++;
        //             }
        //         }
        //     }
        // }








        // for(int i = 0; i < n; i = i+4){
        //     string final = bits.substr(i,i+4);
        //     // cout << final << endl;
        //     int d = 0;
        //     if (final[0] == '0'){
        //         if (final[1] == '0'){
        //             d = 4; 
        //         }else if (final[1] == '1'){
        //             d = 4; 

        //         }if(final[2] == '0'){
        //             d = 2;
        //         }else if(final[2] == '1'){
        //             d = 6;
        //         }if(final[3] == '0'){
        //             d = 1;
        //         }else if(final[3] == '1'){
        //             d = 
        //         }
               
        //     }else if (final[0] == '1'){
        //         if (final[1] == '1'){
                
        //         }else if (final[1] == '1'){

        //         }if(final[2] == '0'){

        //         }else if(final[2] == '1'){

        //         }if(final[3] == '0'){

        //         }else if(final[3] == '1'){
                    
        //         }

        //     }
        // }

    }

}