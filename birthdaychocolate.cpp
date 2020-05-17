#include<iostream>
using namespace std;
int main()
{
     int n;
 cin>>n;
 int ar[n];
 int i,c=0;
 
 for(i=0;i<n;i++)
     cin>>ar[i];
 int d,m;
 cin>>d>>m;
 int s=0,l=1; i=0;
 
       while(m<=n)
       {l=0;s=0;
           while(l<m)
           {
               s=s+ar[l+i];
               l=l+1;
           }
           if(s==d)
           {
               c=c+1;
           } 
        i=i+1;
        n=n-1;
        
       } cout<<c;
        return 0;
}
