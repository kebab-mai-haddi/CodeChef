#include<stdio.h>
int main()
{
int x;float y;
float rem;
scanf("%d%f",&x,&y);
rem=y-x-0.5;
if(rem>0 && x%5==0)printf("%0.2f",rem);
else printf("%0.2f",y);
return 0;
} 
