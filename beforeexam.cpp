#include<bits/stdc++.h>
using namespace std;
int main()
{
   int d,st,mint[31],maxt[31];
   cin>>d>>st;
   for(int i=1;i<=d;i++)
   {
       cin>>mint[i]>>maxt[i];
   }
   int lmax=0;
   int lmin=0;
   for(int i=1;i<=d;i++)
   {
       lmax+=maxt[i];
   }
   for(int i=1;i<=d;i++)
   {
       lmin+=mint[i];
   }
   if(lmax>=st and st>=lmin)
   {/*
       if(lmin==st)
       {
           cout<<"YES"<<endl;
           for(int i=1;i<=d;i++)
           {
               cout<<mint[i]<<" ";
           }
       }
       if(lmax==st)
       {
           cout<<"YES"<<endl;
           for(int i=1;i<=d;i++)
           {
                cout<<maxt[i]<<" ";
           }
       }*/
       
       //else 
       {
          cout<<"YES"<<endl;
          int v=st-lmin;
        for(int i=1;i<=d;i++)
        {
            int temp=min(maxt[i]-mint[i],v);
            cout<<mint[i]+temp<<" ";
            v-=temp;
        }
           
           
       }
       
   }
   else
   {
       cout<<"NO"<<endl;
   }
   
   
   
}
