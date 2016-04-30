#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
	{
        int g,x;
        cin>>g;
        for(x=0;x<g;x++)
		{
             int i,n,q;
             cin>>i>>n>>q;
             if(n%2==0||i==q)
			 {
             	cout<<(n/2)<<endl;
             }
             else
			 {
                cout<<((n/2)+1)<<endl;
             }
        }
    }
    return 0;
} 
