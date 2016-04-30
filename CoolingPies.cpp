#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int c=0;
        int j;j=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]>=a[j])
            {
                c++;
                j++;
            }
        }
    cout<<c<<endl; 
        
    }
} 
