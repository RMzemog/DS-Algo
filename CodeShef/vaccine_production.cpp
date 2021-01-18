#include<iostream>
using namespace std;
int main(){
    int d1,d2,v1,v2,p;
    int total = 0;
    int day = 1;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    // cout << "d1 = "<<d1<<endl;
    // cout << "v1 = "<<v1<<endl;
    // cout << "d2 = "<<d2<<endl;
    // cout << "v2 = "<<v2<<endl;
    // cout << "p = "<<p<<endl;
    while (total < p){
        if (d1 <= day){
            total += v1;
        }
         if (d2 <= day){
            total += v2;
        }
        if(total >= p){
            break;
        }
        // cout << "days" << day << "  total "<< total<< endl;
        day++;
    }
    // cout << "The total day is = "<< day;
    cout << day;
}