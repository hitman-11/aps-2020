#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int t,n,c,sum=0;
int main()
{


    
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>c;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        
        if(c<sum)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
}