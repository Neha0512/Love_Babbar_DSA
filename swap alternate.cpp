#include<iostream>
using namespace std;

int swapAlt(int arr[], int n)
{
	for(int i=0; i<n; i+=2)
	{
		if(i+1<n)
		{
			swap(arr[i],arr[i+1]);
		}
	}
}
	
	void printarr(int arr[], int n){
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"  ";
	}
}

int main()
{
	int n;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	swapAlt(arr,n);
	printarr(arr, n);
}
