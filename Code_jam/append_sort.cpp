#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long test;
    cin >> test;
    long casee  = 0;
    while(test--){
        casee++;
        long n;
        cin >> n;
        vector<long long>arr;
        long long count = 0;
        for(long i = 0; i < n; i++){
            long long temp;
            cin >> temp;
            if(i != 0){
                string a = to_string(arr[i-1]);
                string b = to_string(temp);
                if(arr[i-1] == temp){
                    count += 1;
                    b += '0';
                }else if(arr[i-1] < temp){
                    // cout <<"ho rha hai "<<endl;
                    // cout <<"b =>"<<b<<endl;
                }else if (arr[i-1] > temp){
                    string aa = a.substr(0,b.size());
                    // cout <<"aa "<<aa <<endl;
                    if(stoll(aa) > stoll(b)){
                        long lo = (a.size() - b.size()) + 1;
                        b += string(lo,'0');
                        // cout <<"bb"<<endl;
                        count += lo;
                    }else if(stoll(aa) < stoll(b)){
                        long lo = a.size() - b.size();
                        b += string(lo,'0');
                        count += lo;
                    }else if (stoll(aa) == stoll(b)){
                        long lo = a.size() - b.size();
                        string nine = string(lo,'9');
                        // cout <<"nine =>"<<nine<<endl;
                        string sub = a.substr(b.size(),a.size());
                        // cout <<"substring =>"<< sub << endl;
                        if(nine == sub){
                           b += nine +'0'; 
                           count += lo + 1;
                        }else{
                            reverse(sub.begin(), sub.end());
                            // cout <<"REVERSE =>"<<sub<<endl;
                            count += lo;
                            long carry = 0;
                            for(long k = 0; k < sub.size(); k++){
                                // cout <<"in for"<<endl;
                                if (sub[k] == '9'){
                                    carry = 1;
                                }else if(sub[k] == '1'){
                                    sub[k] = '2';
                                    break;
                                }else if(sub[k] == '2'){
                                    sub[k] = '3';
                                    break;
                                }else if(sub[k] == '3'){
                                    sub[k] = '4';
                                    break;
                                }else if(sub[k] == '4'){
                                    sub[k] = '5';
                                    break;
                                }else if(sub[k] == '5'){
                                    sub[k] = '6';
                                    break;
                                }else if(sub[k] == '6'){
                                    sub[k] = '7';
                                    break;
                                }else if(sub[k] == '7'){
                                    sub[k] = '8';
                                    break;
                                }else if(sub[k] == '8'){
                                    sub[k] = '9';
                                    break;
                                }else if(sub[k] == '0'){
                                    sub[k] = '1';
                                    break;
                                }
                                if (carry == 1){
                                    sub[k] = '0';
                                }
                            }
                        
                        reverse(sub.begin(),sub.end());
                        b += sub;
                        }
                    }
                }
                // cout <<"temp =>"<<temp<<endl;
                temp = stoll(b);
            }
        arr.push_back(temp);
        }
        cout <<"Case #"<<casee<<": "<<count<<endl;
        // for(long i = 0; i < n; i++){
        //     cout <<arr[i] <<" ";
        // }
        // cout << endl;
    }
}