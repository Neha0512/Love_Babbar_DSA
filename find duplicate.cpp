#include<iostream>
using namespace std;
int findDup(int arr[], int n)
{
	int ans=0;
	for(int i=0; i<n; i++)
	{
		ans=ans^arr[i];
	}
	for(int i=0; i<n; i++)
	{
		ans=ans^i;
	}
	return ans;
}

int main()
{
	int n=5;
	int arr[n] = {3,4,1,2,1};
	cout<<findDup(arr, n);
}
