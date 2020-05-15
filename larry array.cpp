
#include <bits/stdc++.h>
using namespace std;
void larrysArray() 
{
    int i,j,n,temp;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-2;i++)
    {
        for(j=n-1;j>1;j--)
        {
            if(arr[j-1]>arr[j]&&arr[j-1]>arr[j-2])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=arr[j-2];
                arr[j-2]=temp;
            }
            else if(arr[j-2]>arr[j-1]&&arr[j-2]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j-2];
                arr[j-2]=arr[j-1];
                arr[j-1]=temp;
            }
            else{}
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
            n=0;
        }
    }
    if(n==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        larrysArray();
    }    
}
