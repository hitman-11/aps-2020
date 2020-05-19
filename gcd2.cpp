#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll gcd(ll a,ll b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
}

ll reduce(int a,string s)
{
    ll m=0;
    for(int i=0;i<s.length();i++)
    {
        m=((m*10)+s[i]-'0')%a;
    }
    return m;
}

ll gcdofab(int a,string s)
{
    ll num=reduce(a,s);
    return gcd(a,num);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int a;cin>>a;
        string s;cin>>s;
        if(a==0)
        cout<<s<<endl;
        else
        cout<<gcdofab(a,s)<<endl;
    }
    return 0;
}