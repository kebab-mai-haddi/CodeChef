#include<iostream>
using namespace std;
int main()
{
int i,n,t,max,maxno,num,arr[10001];
cin>>t;
while(t--)
{
cin>>n;
int arr[10001]={0};
for(i=0;i<n;i++)
{
cin>>num;
arr[num]++;
}
max=0;
for(i=0;i<10001;i++)
{
if(arr[i]>max)
{
max=arr[i];
maxno=i;
}
}
cout<<maxno<<" "<<max<<endl;
}
return 0;
} 
