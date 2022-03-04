#include<bits/stdc++.h>
using namespace std;
void InsertSort(int arr[], int n)
{
	for(int i=1; i<n; i++)
	{
		int temp=arr[i];
		int j=i-1;
		for(;j>=0;j--)
		{
			if(arr[j]>arr[temp])
			{
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}
		arr[temp]=arr[j];
	}
		for(int i=0;i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n=6;
	int arr[n]={9,16,3,2,8,10};
	InsertSort(arr, n);

}
