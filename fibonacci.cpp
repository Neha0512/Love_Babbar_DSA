#include<iostream>
using namespace std;
 
int fibo(int n)
{
	int a=0;
	int b=1;
	for(int i=0; i<n; i++)
	{
		if(i==0)
		cout<<a<<" ";
		if(i==1)
		cout<<b<<" ";
		int ans=a+b;
		
		cout<<ans<<" ";
		a=b;
		b=ans;
	}
}
int main()
{
	int n;
	cin>>n;
	return fibo(n);
}
