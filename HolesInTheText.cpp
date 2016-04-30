#include<stdio.h>
int main()
{
int t,c,i;
char str[100];
scanf("%d",&t);
for(;t>0;t--)
{
c=0;
fflush(stdin);
scanf("%s",str);
i=-1;
while(str[++i]!='\0')
{
switch(str[i])
{
case 'A':
case 'P':
case 'O':
case 'D':
case 'R':
case 'Q':
c++;
break;
case 'B':
c+=2;
break;
}
}
printf("%d\n",c);
}
return 0;
}
