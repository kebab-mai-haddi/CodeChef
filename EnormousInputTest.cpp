#include<stdio.h>
int main()
{
int n,k,c,i;
c=0;
scanf("%d%d",&n,&k);
for(;n>=1;n--)
{
scanf("%d",&i);
if(i%k==0)c++;
}
printf("%d",c);
return 0;
}  
