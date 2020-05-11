#include<bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sum=n;
        int rem;
        while(n>=10)
        {
 
            rem=n/10;
            sum+=rem;
            n=n%10+rem;
        }
        cout<<sum<<endl;
    }
}