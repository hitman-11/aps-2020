#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+2;j<n;j++)
            {
                if (ar[i]==ar[j])
                {
                    flag = 1;
                    break;
                }
            }
            
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}