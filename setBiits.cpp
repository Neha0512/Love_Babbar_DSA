#include<bits/stdc++.h>
using namespace std;
 int setBits(int n)
 {
     int count=0;
     while(n){
     if(n&1)
     count++;
     n=n>>1;
 	}
     return count;
 }
 int main()
 {
 	int a,b;
 	cin>>a>>b;
 	int setA= setBits(a);
 	int setB =setBits(b);
 	cout<<setA+setB;
 }
