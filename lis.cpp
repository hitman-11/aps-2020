#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n,arr[1000001],lis[1000001];
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        lis[i]=1;
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j] && lis[j]+1>lis[i])
            {
                lis[i]=lis[j]+1;
            }
        }
    }
    cout<<lis[n-1];
}
