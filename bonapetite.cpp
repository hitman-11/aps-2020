#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,b,sum=0,m;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        
        cin>>m;
        if(i!=k)
        {
            sum+=m;
        }
    }
    cin>>b;
    cout<<(b==sum/2?"Bon Appetit":to_string(b-sum/2));
}
