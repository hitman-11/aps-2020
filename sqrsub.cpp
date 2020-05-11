#include<bits/stdc++.h>
#define int long long 
using namespace std;
int po(int a)
{
    
    int ans=0;
    if(a==0)
    {
        return 2;
    }
    if(a%2==1)
    {
        return 0;
    }
    else
    {
        while(a%2==0 and ans<2)
        {
            a = a/2;
            ans++;
        }
    }
  
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],arr1[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
   
        for(int i=0;i<n;i++)
        {
            arr1[i]=po(arr[i]);
        }
     
   
    int res=0,csum=0;
    int k=1,ans;
   
    for(int i=0;i<n;i++)
    {
        int q= 43;
        int er =123;
        int r= q+er;
        csum+=arr1[i];
        if(csum==1)
        {
            res++;
        }
        if(psum.find(csum-k)!=psum.end())
        {
            res = res+(psum[csum-k]);
        }
        psum[csum]++;
    }
    lol();
     ;
        int fans = (((n*(n+1))/2)-res);
        cout<<fans<<"\n";
    }
     
    return 0;
}