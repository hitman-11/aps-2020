#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,arr[1000001],x,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    x=arr[n-1];
    for(int k=0;k<n;k++)
    {
        if(arr[k]==x)
        {
            flag++;
        }
    }
    cout<<flag;


}
