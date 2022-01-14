#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int row=1;

	while(row<=n)
	{
		int space1=n-row;
		while(space1)
		{
			cout<<" ";
			space1--;
		}
			int col=1;
			while(col<=row){
		cout<<'A'<<" ";
		col++;
		}
			cout<<endl;
			row++;

		}
	}

