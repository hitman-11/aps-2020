#include<bits/stdc++.h>
using namespace std;
int sa[10001];
int main()
{
    int t,n,m,f[1001],p[1001];
    cin>>t;
    while(t--)
    {
       
        cin>>n>>m;
        
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
        }
      
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        
       
        for(int i=0;i<n;i++)
        {
            mm[f[i]]+=p[i];
        
        }
      
        for(auto it:mm)
        {
            minn=min(minn,it.second);
        }
      
        
        cout<<minn<<endl;
        
    }
    
}