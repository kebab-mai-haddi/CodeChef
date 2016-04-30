#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,m,c;
		cin>>n>>m;
		int arr1[n];int arr2[m]; int chef[n]; int ass[n];
		
		for(i=0;i<m;i++)
		cin>>arr2[i];
		for(i=0;i<n;i++)
		arr1[i]=i+1;
		/*for(i=0;i<n;i++)
		cout<<arr1[i]<<" ";
		cout<<endl;
		*/
/*        for(i=0;i<m;i++)
		cout<<arr2[i]<<" ";
		cout<<endl;
*/	/*correct till here*/
		int arr3[n-m];
		for(i=0;i<m;i++)
		{
			c=arr2[i];
			arr1[c-1]=0;
		}
/*		for(i=0;i<n;i++)
		cout<<arr1[i]<<" ";
		cout<<endl;
*/		/* correct till here*/
		int j=0;
		for(i=0;i<n;i++)
		{
			if(arr1[i]!=0)
			{
				arr3[j]=arr1[i];
				j++;
			}
			
		}
/*		for(i=0;i<j;i++)
		cout<<arr3[i]<<" ";
		cout<<endl;
		*/ /* correct till here*/
		
		int l=0; int k=0;
		for(i=0;i<j;i++)
		{
			if(i%2==0)
			{
				chef[l]=arr3[i]; l++;
				
			}
 
			else
			{
				ass[k]=arr3[i]; k++;
			}
		}
		for(i=0;i<l;i++)
		cout<<chef[i]<<" ";
		cout<<endl;
		for(i=0;i<k;i++)
		cout<<ass[i]<<" ";
		cout<<endl;
		
	}
 
	return 0;
} 
