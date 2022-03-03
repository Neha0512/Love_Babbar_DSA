//use case: when array size is small

#include<bits/stdc++.h>
using namespace std;
int selectSort(int arr[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int minInd=i;
		for(int j=i+1; j<n;j++)
		{
			if(arr[j]<arr[minInd])
			minInd=j;
		}
		swap(arr[minInd],arr[i]);
	}
	
 } 
 
 int main()
 {
 	int n=5;
 	int arr[n]={6,8,5,10,3};
 	selectSort(arr, n);
 	for(int i=0; i<n; i++)
 	{
 		cout<<arr[i]<<" ";
	 }
 }
