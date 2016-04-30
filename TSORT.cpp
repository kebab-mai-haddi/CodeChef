#include<stdio.h>
int main()
{
    int t,x,a[1000001]={0},min,max,j;
    scanf("%d",&t);
    max=-1;
    min=1000001;
    while(t--)
    {
        scanf("%d",&j);
        a[j]++;
        if(j>max)max=j;
        if(j<min)min=j;
    }
    for(j=min;j<=max;j++)while(a[j]!=0){printf("%d\n",j);a[j]--;}
    return 0;
} 
