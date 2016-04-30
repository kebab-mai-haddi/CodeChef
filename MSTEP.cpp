#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char j[10000],m[10000];
		int count=0;
		scanf("%s",&j);
		scanf("%s",&m);
		int lm=strlen(m);
		int lj=strlen(j);
		char valarr[1001]={'0'};
		for(int i=0;i<lj;i++)
		{
			int c=j[i];
			valarr[c]='1';
			//cout<<c<<" "<<endl;
		}
		for(int i=0;i<lm;i++)
		{
			int c=m[i];
			if(valarr[c]=='1')
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}  
