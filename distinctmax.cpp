#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int arr[n],i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	if(arr[0]==1)
	{
		cout<<arr[n-1]<<endl;
	}
	else
	{
		for(i=1;i<n;i++)
		{
			if(arr[i]%arr[0]!=0)
			{
				cout<<arr[n-1]<<endl;
				return 0;
			}
		}
		cout<<arr[n-1]/arr[0]<<endl;
	}
	return 0;
}
