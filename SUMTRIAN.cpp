#include<stdio.h>
#include<stdlib.h>
#define gc getchar_unlocked
#define pc putchar_unlocked
#define max(a,b) ((a)>(b)?(a):(b))
 
inline int get()
{
   int n=0;
   int ch=gc();
   while(ch<'0'||ch>'9')
        ch=gc();
   while(ch>='0'&&ch<='9')
    {
        n=(n<<3)+(n<<1)+ch-'0';
        ch=gc();
    }
   return n;
}
 
inline void lprint(int a)
{
 int i=0;
char S[20];
while(a>0)
{
    S[i++]=a%10+'0';
a=a/10;
}
--i;
while(i>=0)
pc(S[i--]);
pc('\n');
}
 
int main()
{
    int t;
    t=get();
    while(t--)
    {
        int a[101][101]={0};
        int b[101]={0};
        int range;
        range=get();
 
        int i,j;
 
        for(i=0;i<range;i++)
            for(j=0;j<=i;j++)
                a[i][j]=get();
 
/* //Testing input
        for(i=0;i<range;i++)
        {
            for(j=0;j<=i;j++)
                printf("%d ",a[i][j]);
            printf("\n");
        }
//*/
        int val;
        for(i=range-1;i>=0;i--)
        {
            for(j=i;j>=0;j--)
            {
                val=max(a[i][j],a[i][j-1]);
                a[i-1][j-1] += val;
            }
        }
        lprint(a[0][0]);
    }
    return 0;
} 
