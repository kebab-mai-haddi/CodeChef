#include<iostream>
using namespace std;
int main()
{
	long long int i,j,k,l,min,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		min=-1;
		int arr[n];
		for(long long int i=1;i<=n;i++)
		{
			cin>>arr[i];
			if((arr[i]+i-1)>min)
				min=arr[i]+i-1;
		}
		 
		cout<<min<<endl;
	}
	return 0;
} 
