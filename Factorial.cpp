#include <stdio.h>
 
int main()
{
unsigned long long int c,n;
int i;int l;
scanf("%d",&l);
for(i=1;i<=l;i++)
{
c=0;
scanf("%llu",&n);
 
while(n/5>0){c+=n/5;n/=5;}
printf("%llu\n",c);
c=0;
}
return 0;
}
