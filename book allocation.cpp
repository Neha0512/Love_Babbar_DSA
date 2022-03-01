#include<bits/stdc++.h>
using namespace std;

bool ats(int n, int m, int time[], int mid)
{
    int std=1;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(sum+time[i]<=mid)
        {
            sum+=time[i];
        }
        else{
            std++;
            if(std>m || time[i]>mid)
            {
                return false;
            }
            sum=time[i];
        }
      }
     return true;
}

long long book(int n, int m, int time[]) 
{
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++)
        {
            sum+=time[i];
        }
            int e=sum;
            int ans=-1;
            int  mid=s+(e-s)/2;
     while(s<=e)
    {
        if(ats( n, m, time, mid))
        {
			ans=mid;
            e=mid-1;
            }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
	int n=4;
	int arr[n]={10,20,10,30};
	cout<<book(n,2,arr);
}
