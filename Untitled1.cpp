#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum=0;
	int product=1;
	while(n!=0)
	{
		int res=n%10;
		sum= sum+res;
		product= product*res;
		n=n/10;
	}
	int diff= product-sum;
	cout<<diff;
}
