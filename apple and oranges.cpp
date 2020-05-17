#include <bits/stdc++.h>

using namespace std;

int main()
{
   int s,t,a,b,i,m,n,d1,d2,c1=0,c2=0;

   cin>>s>>t>>a>>b>>m>>n;

   int app[m],orn[n];

   for(i=1; i<=m; i++)
   {
    cin>>app[i];
    d1=a+app[i];
    if(d1>=s && d1<=t){
        c1++;
    }
   }

   for(i=1; i<=n; i++)
   {
    cin>>orn[i];
    d2=b+orn[i];
    if(d2>=s && d2<=t)
    {
        c2++;
    }
   }

   cout<<c1<<endl;
   cout<<c2<<endl;

   return 0;
}
