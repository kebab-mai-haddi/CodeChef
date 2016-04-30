#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,p1,p2,lead,d,i,tp1,tp2;
d=0;tp1=tp2=0;
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{
scanf("%d%d",&p1,&p2);
tp1+=p1;tp2+=p2;
if(i==1)lead=tp1-tp2;
else d=tp1-tp2;
if(abs(lead)<abs(d))lead=d;
}
if(lead<0)printf("%d %d",2,abs(lead));
else printf("%d %d",1,abs(lead));
 
return 0;
} 
