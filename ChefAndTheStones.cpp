#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n1,n2,m,x;
		cin>>n1>>n2>>m;
		long long int count=m*(m+1)/2;
		if(count<=n1 && count<=n2)
			x=n1+n2-2*count;
		else
			if(n1>n2)
				x=n1-n2;
			else
				x=n2-n1;
		cout<<x<<endl;
	}
	return 0;
}  
