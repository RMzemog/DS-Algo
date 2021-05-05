#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    int casee = 0;
    while(test--){
        casee++;
        int x, y;
        string s;
        cin >> x >> y >> s;
        string d;
        for(int i = 0; i < s.size(); i++){
            if ((d[d.size() - 1] == '?' && s[i] == '?') ){
                continue;
            }else{
                d += s[i];
            }
        }
        int count = 0;
        if (d.size() == 0){
            cout <<"Case #"<<casee<<": "<<count<<endl;
        }else if(d.size() == 1){
            cout <<"Case #"<<casee<<": "<<count<<endl;
        }else{
        for(int i = 0; i<d.size(); i++){
            if(d[i] == '?'){
            if(i == 0){
                d[0] = d[1];
            }else if (i == d.size() - 1){
                d[i] = d[i - 1];
            }else{
                if(d[i - 1] == d[i + 1]){
                    d[i] = d[i - 1];
                }else if (d[i - 1] == 'J' && d[i + 1] == 'C'){
                    d[i] = 'J';
                }else if (d[i - 1] == 'C' && d[i + 1] == 'J'){
                    d[i] = 'C';
                }
            }
        }
        }
        for(int i = 1; i < d.size(); i++){
            if (d[i - 1] == 'C' && d[i] == 'J'){
                count += x;
            }else if(d[i - 1] == 'J' && d[i] == 'C'){
                count += y;
            }
    }
    cout <<"Case #"<<casee<<": "<<count<<endl;
    }
}
}