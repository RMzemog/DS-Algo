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
#include <iostream>
using namespace std;

int main() {
	int n,h,x;
	cin>>n>>h>>x;
	int arr[n];
    bool done = true;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    if((arr[i]+x)>=h)
	    {
	     bool done = false;
         break;
	    }
	    else
	    {
	        bool done = true;
	    }
	}
    if (done == true){
        cout << "No";
    }else{
        cout << "Yes";
    }
	
	return 0;
}
