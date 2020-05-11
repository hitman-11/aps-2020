#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[1000001],t,n,k,total=0,rem=0;
    cin>>t;
    while(t--)
    {
        total=0;
        cin>>n>>k;
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(long long int j=0;j<n;j++)
        {
            total+=arr[j];
        }
        rem=total%k;
        cout<<rem<<endl;
    }
    
}