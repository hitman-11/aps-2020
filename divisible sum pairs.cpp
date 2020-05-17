#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int N=1000000;
int arr[N];
int main()
{
    int n,k,i,j;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
int count=0;
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if((arr[i]+arr[j])%k==0)
        count++;
    }
}            
 cout<<count;           
return 0;
}
