#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    string wub = "WUB";
    string final;
    bool done = true;
    // cout << s.substr(0, 3);
    for(int i = 0; i < s.size(); i++){
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i+= 2;

            if(!done){
                cout<<" ";
            }

        }else{
            done = false;
            cout<<s[i];
        }
        // cout << "i => "<< i << "  s[i] -> "<< s[i]<<endl;
        // cout <<"i+3 => "<< i+2 << "  s[i+3] -> "<<s[i+2]<<endl;
        // cout << "substr -> "<< s.substr(i, i+3) << endl;
        // // cout << i << endl;
        // // cout <<"wub -> "<< s.substr(i, i+3)<<endl;
        // // cout <<"i + 3 -> "<< i+3 <<" i -> "<< i << endl;
        // // if (s.substr(i,i+3) == wub){
        // //     i += 2;
        // // }else{
        // //     final += s[i];
        // //     cout << "Final" << final;
        // // }
    }
    // cout << final;
}