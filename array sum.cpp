#include<bits/stdc++.h>
using namespace std;

int printSum(int arr[], int n)
{
	int ans=0;
	for(int i=0; i<n; i++ )
	{
		ans=arr[i]+ans;
	}
	return ans;
}

int main()
{
	int n;
	cout<<"Enter the number of elements";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<printSum(arr,n);
}
