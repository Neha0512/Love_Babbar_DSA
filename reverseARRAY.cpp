#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	int arr[n]={4,0,29,6,11};
	int s=0, e=n-1;
	while(s<=e)
	{
		swap(arr[s],arr[e]);
		s++;
		e--;
	}
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"   ";
	}
}
