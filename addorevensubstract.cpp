#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b>a)
        {
            if((b-a)%2==0)
            {
                cout<<"2"<<endl;
            }
            else
            {
                cout<<"1"<<endl;
            }
        }
        else if(a>b)
        {
            if((a-b)%2==0)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;    
            }
        }
        else
        {
            cout<<"0"<<endl;   
        }

    }
}