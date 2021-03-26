#include<iostream>
#include<string>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string a;
        string b;
        cin >> a; 
        cin >> b;
        int e = stoi(a.substr(0,2));
        double f = stoi(a.substr(3,5))/100.00;
        double target = 0;
        if (b == "AM"){
            if (e == 12){
                target += 0 + f;
            }else{
                target += e + f;
            }
        }else{
            if (e == 12){
                target += e + f;
            }else{
                target += 12 + (e + f);
            }
        }
        // cout << target<<endl;
        int n = 0;
        cout << target <<endl;
        cin >> n;
        string ans = "";
        while(n--){
            string s;
            cin >> s;
            string s2;
            string s3;
            string s4;
            cin >> s2;
            cin >> s3;
            cin  >> s4;
            // cout << s << endl;
            // cout << s2 << endl;
            // cout << s3 << endl;
            // cout << s4 << endl;
            int t1 = stoi(s.substr(0,2));
            double t2 = stoi(s.substr(3,5))/100.00;
            int t3 = stoi(s3.substr(0,2));
            double t4 = stoi(s3.substr(3,5))/100.00;
            // cout << t1 << endl;
            // cout << t2 << endl;
            // cout << t3 << endl;
            // cout << t4 << endl;
            double start = 0;
            double end = 0;
            if (s2 == "AM"){
                if (t1 == 12){
                    start = 0 + t2;
                }else{
                start += t1 + t2;
                }
            }else{
                start += 12 +(t1 + t2);
                if (t1 == 12){
                    start -= 12;
                }
            }
            if (s4 == "AM"){
                if (t3 == 12){
                    end = 0 + t4;
                }else{
                end += t3 + t4;
                }
            }else{
                end = 12 + (t3 + t4);
                if (t3 == 12){
                    end -= 12;
                }
            }
            cout << start << endl;
            cout << end << endl;
            if (target >= start && target <= end){
                ans += '1';
            }else{
                ans += '0';
            }


        }
        cout << ans << endl;
    }
}