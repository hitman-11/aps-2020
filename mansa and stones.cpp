#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n,a,b;
        set<int> s;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++)
        {
            s.insert((a*i)+b*(n-i-1));
        }
        for(auto i:s)
        cout<<i<<" ";
        t--;
        cout<<"\n";
    }
}
