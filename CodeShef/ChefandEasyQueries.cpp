#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
int test_case;
cin >> test_case;
 while (test_case--){
  int k, n;
  cin >> n >> k;
  vector<long>v;
  for(int i = 0; i < n; i++){
      long dd;
      cin >> dd;
      v.push_back(dd);
  }
  long long sum = accumulate(v.begin(),v.end(),0);
//   cout<<"sum"<<sum<<endl;
  long long final = sum/k;
  cout<< final+1<<endl;
}
}