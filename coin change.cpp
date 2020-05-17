#include <iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int cnt[500];

int32_t main()
{
    int arr[51],n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    cnt[0]=1; 
    for(int i=0;i<m;i++) 
    {
        for(int j=arr[i];j<=n;j++)
        {
            cnt[j]+=cnt[j-arr[i]];
        }
    }
    cout<<cnt[n];
}
