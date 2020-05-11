#include<bits/stdc++.h>
using namespace std;
long int t,n,arr[100001];
int32_t main()
{
    
    cin>>t;
    while(t--)
    {
        
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n, greater<>());
        int arr1[n];
        memset(arr1,0,sizeof(arr1));
        for(int i=0;i<n;i++)
        {
            arr1[i]=arr[i]-i;
        }
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            if(arr1[i]>0)
            {
                sum = (sum+arr1[i])00000007;
            }
        }
        cout<<sum<<endl;
    }
}