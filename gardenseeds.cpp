#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int size,seeds;
		cin>>size>>seeds;
		long long int arr[seeds],arr1[seeds+1],i,m=0;
		for(i=0;i<seeds;i++)
		{
			cin>>arr[i];
		}
		arr1[0]=arr[0]-1;
		for(i=1;i<seeds;i++)
		{
			arr1[i]=arr[i]-arr[i-1]-1;
		}
		arr1[seeds]=size-arr[seeds-1];
		for(i=1;i<seeds;i++)
		{
			if(arr1[i]%2==0)
			{
				m=max(m,arr1[i]/2);
			}
			else
			{
				m=max(m,arr1[i]/2+1);
			}
		}
		m=max(m,arr1[0]);
		m=max(m,arr1[seeds]);
		cout<<m<<endl;
	}
	
}
