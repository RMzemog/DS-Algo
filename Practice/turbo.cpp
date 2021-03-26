#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int arr[1000001]={0};
	int x;
	cin>>n;
	while(n--)
	{
	    cin>>x;
	    arr[x]++;
	}
	for(int i=0;i<=100000;i++)
	{
	    while(arr[i]--)
	    
	        cout<<i<<endl;
	    
	}
	return 0;
}