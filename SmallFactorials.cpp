#include<stdio.h>
int main()
{
    int i=0,j;
    int m=0;
    int p=1;
    int d,c,t,n;
    scanf("%d",&t);
    while(t--)
    {
        int a[200]={0};
        a[0]=1;
        scanf("%d",&n);
        m=0;
        for(i=1;i<=n;i++)
        {
            c=d=0;
            for(j=0;j<=m;j++)
            {
                p=a[j]*i;
                d=p%10+c;
                c=p/10;
                while(d>9)
                {
                    c+=d/10;
                    d%=10;
                }
                if(c>0 && j==m)m++;
                a[j]=d;
            }
        }
        for(i=m;i>=0;i--)printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}
