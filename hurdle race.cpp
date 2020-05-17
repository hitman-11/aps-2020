#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,arr[1001];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    
    }
    sort(arr,arr+n);
    int c=arr[n-1];
    if(c>k)
    {
        cout<<c-k;

    }
    else
    {
        cout<<"0";
    }

}
