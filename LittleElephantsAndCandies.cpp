#include<iostream>
using namespace std;
class avi
{
	public:
int code()
{
	
		int n,c;
		cin>>n>>c;
		int a[n];
		int i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
	int sum; sum=0;
	for(i=0;i<n;i++)
{	if(sum>c)
    return false;
	sum=sum+a[i];}
	if(sum<=c)
	return true;
	else
	return false;
		
			}
};
int main()
{
	avi ob;
int t;
	cin>>t;
	while(t--)
	{	bool ac=ob.code();
    if(ac)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
		
}
return 0;
} 
