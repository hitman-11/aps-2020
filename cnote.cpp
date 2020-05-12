#include <bits/stdc++.h>
#define lli long long int
#define rep(i, a, b) for (lli i=a; i<b; i++)
lli arr[1000000];
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int x,y,k,n,p,c,flag=0;
     cin>>x>>y>>k>>n;
     for(lli i=0;i<n;i++)
     {
        cin>>p>>c;
        if((x-y)<=p&&k>=c)
            flag=1;
     }
     if(flag==1)
        cout<<"LuckyChef"<<endl;
     else
        cout<<"UnluckyChef"<<endl;
 
 
   }
    return 0;
}
 