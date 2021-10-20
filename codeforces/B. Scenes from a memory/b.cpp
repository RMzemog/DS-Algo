#include<iostream>
using namespace std;

bool isprime(int nn){
    if(nn <= 1){
        return false;
    }
    if(nn <= 3){
        return true;
    }
    if(nn % 2 == 0 || nn % 3 == 0)
        return false;
    for(int i = 5; i * i <= nn; i = i+6)
        if(nn % i == 0 || nn % ( i + 2) == 0)
            return false;
    return true;
}


int main(){
    int n;
    cin >> n;
    while(n--){
        int count;
        cin >> count;
        string s;
        cin >> s;
        bool dona = true;
        for(int i= 0; i < count; i++){
            if(s[i] != '2' && s[i] != '3' && s[i] != '5' && s[i] != '7'){
                cout<<1<<endl;
                cout<<s[i];
                cout<<endl;
                dona = false;
                break;
            }
        }
        bool don = true;
        if(dona == false){
            continue;
        }else{
            for(int i = 0; i < count; i++){
                if(don == false){
                    break;
                }
                for(int j = i+1; j < count; j++){
                    if(i != j){
                        string dd = "";
                        dd+=s[i];
                        dd+=s[j];
                        int final = stoi(dd);
                        if(!isprime(final)){
                            cout<<2<<endl;
                            cout<<dd<<endl;
                            don = false;
                            break;
                            
                        }
                    }
                }
            }
        }
    }
}