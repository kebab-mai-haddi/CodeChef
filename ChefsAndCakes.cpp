#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		if(m==0)
		{
			if(n==1)
			cout<<"Yes"<<endl;
			else
			cout<<"No 1"<<endl;
			continue;
		}
		long long int d= std::__gcd(n,m);
		if(d==1)
		cout<<"Yes"<<endl;
		else
		cout<<"No "<<(n/d)<<endl;
	}
	return 0;
} 
