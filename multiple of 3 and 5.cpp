#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int sum=0;
        cin >> n;
        int l=(n-1)/3;
        int m=(n-1)/5;
       
        sum=(l*(2*3+(l-1)*3))/2;
        sum+=(m*(2*5+(m-1)*5))/2;
        int s=0;
        if(n>15)
        s=floor((n-1)/15);
        sum-=(s*(2*15+(s-1)*15))/2;
        cout<<sum<<endl;
    }
    return 0;
}
