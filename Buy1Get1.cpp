#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
int main()
{
	
	int test,i;
	cin>>test;
	while(test--)
	{
		int x[256]={0}; int sum=0; int i=0;
	string s;
	cin>>s;
	int size=s.length();
	char tab2[200];
    strcpy(tab2, s.c_str());
	while(size--)
		{
			x[s[i]]++;
			i++;
		}
	for(int i='A';i<='z';i++)
    {
    	if(x[i]%2==0)
    	sum+=(x[i]/2);
    	else
    	sum+=((x[i]/2)+1);
    }
    cout<<sum<<endl;
    }
    
    return 0;
} 
