#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        vector<string>v;
        string ans = "YES";
        for(int i = 0; i < n;i++){
            string s;
            cin >> s;
            string lw="abcdefghijklm";
            string uw="NMOPQRSTUVWXYZ";
            string ss = s;
            string su = s;
            string sl = s;
            transform(su.begin(), su.end(), su.begin(), ::toupper);
            transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
            sort(ss.begin(),ss.end());
            cout <<"su "<<su<<endl;
            cout <<"ss "<<ss<<endl;
            cout <<"sl "<<sl<<endl;
            // cout <<"ss "<<ss<<endl;
            if(lw.find(ss)!=std::string::npos){
                cout<<"found"<<endl;
            }
            if((((s == su) && (uw.find(ss)!=std::string::npos)) || ((s == sl) && (lw.find(ss)!=std::string::npos)))){
                ans = "YES";
            }else{
                ans="NO";
                break;
            }

            // v.push_back(s);
        }
        cout << ans << endl;
        // for(int i =0; i < n; i++){
        //     cout << v[i] <<" ";
        // }

    }
}

// char* removeDuplicates(char *s,int n){
//   unordered_map<char,int> exists;
//   int index = 0;
//   for(int i=0;i<n;i++){
//     if(exists[s[i]]==0)
//     {
//       s[index++] = s[i];
//       exists[s[i]]++;
//     }
//   }
//   return s;
// }