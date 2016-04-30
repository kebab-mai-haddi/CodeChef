#include<iostream>
using namespace std;
int main()
{
	long long int n,c,d;
	cin>>n;
	long long int arr[n];
	long long int arr2[100001]={0};
	long long int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		c=arr[i];
		arr2[c]=1;
	}
	for(i=0;i<n+1;i++)
	if(arr2[i]==0)
	cout<<i<<" ";
	/*for(i=;i<n;i++)
	{
		if(arr2[i]==0)
		{
			d=i;
			cout<<d<<" ";
		}
	}*/
	
}
