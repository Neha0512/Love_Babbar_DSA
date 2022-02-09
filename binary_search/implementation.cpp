#include<bits/stdc++.h>
using namespace std;

int bSearch(int arr[], int n, int k)
{
	int l=0;
	int r=n-1;
	while(l<=r)
	{
		int mid=l+(r-l)/2;
		if(arr[mid]==k)
		{
			return mid;
		}
		else if(arr[mid]>k)
		{
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return -1;
}
int main()
{
	int n=6;
	int arr[n]={2,4,6,8,9,28};
	int k=9;
	cout<<bSearch(arr,n,k);
}
