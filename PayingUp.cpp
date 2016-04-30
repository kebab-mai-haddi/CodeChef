#include<algorithm>
#include<iostream>
using namespace std;
class avi
{
	public:
		
		int solve(int i, int m, int n,int a[])
		{
			int c,sum; //c is a flag
		    c=0;
            for(int j=i;j<n;j++)
            {
               sum=m-a[j];
               if(sum==0)
               return true;
			
			if(sum>0)
            {
			  c=solve(j+1,sum,n,a);
              if(c)
              return true;
            }
            }
            return false;
        }
};
int main()
{
avi ob;
int t;
cin>>t;
 
while(t--)
{ int c=0;
       
		int n,m; 
        cin>>n>>m;
        int a[n];
    for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
    sort(a,a+n);
   bool qwe=ob.solve(0,m,n,a);
    if(qwe)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    
    }
 
    return 0;
} 
