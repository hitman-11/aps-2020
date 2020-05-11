#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    int a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int x = a%b;
        if(x!=0)
        {
            int y = b-x;
            cout<<y<<endl;    
        }
        else
        {
            cout<<0<<endl;
        }
        
    }
}