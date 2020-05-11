#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[200001];
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        int ec=0;
        int oc=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                ec++;
                
            }
            else
            {
                oc++;
                
            }
        }
        //cout<<oc<<endl;
        //cout<<ec<<endl;

        //if(oc==n)
        //{
            if(n%2==1 and oc>=1)
            {
                cout<<"YES"<<endl;
            }
            else if(n%2==0 and oc>=1 and oc!=n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        //
        /*else if()
        
        else
        {
            cout<<"NO"<<endl;
        }*/
        
    }
}