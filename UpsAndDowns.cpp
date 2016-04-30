#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	long long int n,t;
	cin>>t;
	while(t--){
	cin>>n;
	long long int num[n]; 
	long long int asli[n]; 
	for(long long int i=0;i<n;i++)
		cin>>num[i];
	sort(num,num+n);
/*	for(long long int i=0;i<n;i++)
		cout<<num[i]<<" ";        */
	//cout<<endl;
	long long int j=0;long long int count=0;
	for(long long int i=0;i<n;i++)
	{
		if(j<n)
		{
			asli[j]=num[i]; count++;
			j+=2;			
		}
	}
	j=1;
	for(long long int m=count;m<n;m++)
	{
		if(j<n)
		{
			asli[j]=num[m];
			j+=2;
		}
	}
	for(long long int i=0;i<n;i++)
	cout<<asli[i]<<" ";
	cout<<endl;}
	return 0;
} 
