#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the money amount"<<endl;
	cin>>n;
	int num;
	cout<<"Enter the required notes"<<endl;
	cin>>num;
	switch(num)
	{
		case 100: num= n/100;
		         n= n%100;
		          cout<<num<<endl;
		          break;
		          
		case 50: num= n/50;
		         n= n%50;
		          cout<<num<<endl;  
				  break;
				  
			case 10: num= n/10;
		          n= n%50;
		          cout<<num<<endl;
				  break;
				  
				  case 1: cout<<n<<endl;
				  break;
				  
				  default : cout<<"This is not a valid input";      
	}
}
