using namespace std;
#include<iostream>
int binaryfirst(int a[],int n,int k)
{
    int s=0,e=n-1;
    int mid;
    int ans=-1;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(a[mid]==k)
        {
            ans=mid;
            e=mid-1;
        }
        else if(a[mid]>k)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}
int binarylast(int a[],int n,int k)
{
    int s=0,e=n-1;
    int mid;
    int ans=-1;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(a[mid]==k)
        {
            ans=mid;
            s=mid+1;
        }
        else if(a[mid]>k)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}

int main() {
	    int n = 9;
        int k = 5;
	    int a[9] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
;

	    int index1=binaryfirst(a,n,k);
	    int index2=binarylast(a,n,k);
	    if(index1==-1&&index2==-1)
	    {
	        cout<<index1<<endl;
	    }
	    else
	    {
	        cout<<index1<<" "<<index2<<endl;
	    }
	return 0;
}