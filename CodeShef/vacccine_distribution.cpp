#include<iostream>
#include<vector>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        int n, d;
        cin >> n >> d;
        int n2 = n;
        int final = 0;
        vector<int>exp = {};
        vector<int>com = {};        
        while (n--){
            int temp;
            cin >> temp;
            if (temp >= 80 || temp <= 9){
                exp.push_back(temp);
            }else{
                com.push_back(temp);
            }
        }
        // cout << exp.size()<< endl;
        if (exp.size()  % d == 0){
             final += exp.size()/d;
        }else {
             final += exp.size()/d;
             final++;
        }
        if (com.size() % d == 0){
            final += com.size()/d;
        }else{
            final += com.size()/d;
            final++;
        }
        // final += exp.size()/d;
        // final += com.size()/d;
        // cout << endl;
        // cout <<"Exp size = "<< exp.size()<<endl;
        // cout <<"Com size = "<< com.size()<<endl;
        cout<< final << endl;
    }
}