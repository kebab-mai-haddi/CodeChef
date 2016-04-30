#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{ int cuts,n,m,i,j,t;
cin>>t;
 while(t--)
 {
  cuts=0;
  scanf("%d",&n);
  scanf("%d",&m);
  int arr[m];
  for(i=0;i<m;i++)
  scanf("%d",&arr[i]);
  sort(arr,arr+m);
  cout<<"\n";
   i=0;
  j=m-1;
  while(i!=j)
  {
  	arr[i]=arr[i]-1;
  	
  	arr[j-1]+=arr[j]+1;
  	j--;
  	if(arr[i]==0)i++;
  	cuts++;
  }
  printf("%d",cuts);printf("\n");
}
return 0;
} 
