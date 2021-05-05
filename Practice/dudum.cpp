// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin >> n;
//     double sum = 0;
//     for(int i = 0; i < n; i++){
//         double j = i;
//         double total = (j+1)/(j+2);
//         if (i % 2 == 0){
//             sum += total;
//         }else{
//             sum -= total;
//         }
//     }
//     cout << sum;
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	int n,h,x;
// 	cin>>n>>h>>x;
// 	int arr[n];
//     bool done = true;
// 	for(int i=0;i<n;i++)
// 	{
// 	    cin>>arr[i];
// 	    if((arr[i]+x)>=h)
// 	    {
// 	     bool done = false;
//          break;
// 	    }
// 	    else
// 	    {
// 	        bool done = true;
// 	    }
// 	}
//     if (done == true){
//         cout << "No";
//     }else{
//         cout << "Yes";
//     }
	
// 	return 0;
// }

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int>one;
    vector<int>two;
    for(int i = 0; i < n; i++){
        int tempo1, tempo2;
        cin >> tempo1 >> tempo2;
        if (tempo2 == 1){
            one.push_back(tempo1);
        }else if(tempo2 == 0){
            two.push_back(tempo1);
        }
    }
    sort(one.begin(), one.end(), greater<int>());
    // sort(two.begin(),one.end(), greater<int>());
    int sums = accumulate(two.begin(), two.end(), 0);
    int koka = k - two.size();
	// cout << koka<< endl;
	// for(int i = 0 ; i < two.size(); i++){
	// 	cout << two[i]<<" ";
	// }
	// cout << endl;
	// for(int i = 0 ; i < one.size(); i++){
	// 	cout << one[i]<<" ";
	// }	
    for(int i = 0; i < k ; i++){
       sums += one[i]; 
    } 
	for(int i = one.size() - 1; i >= k; i--){
		sums -= one[i];
	}
    cout << sums;
}
