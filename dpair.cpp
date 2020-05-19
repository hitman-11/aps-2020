#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    long long int t,a,b;
    map<long long int,int> m1,m2;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        cin>>t;
        m1.insert({t,i});
    }
    for(int i=0;i<b;i++)
    {
        cin>>t;
        m2.insert({t,i});
    }
    auto it1=m1.begin();
    for(auto it2=m2.begin();it2!=m2.end();it2++)
    {
        cout<<it1->second<<" "<<it2->second<<endl;
    }
    it1++;
    auto it2=m2.end();
    it2--;
    for(;it1!=m1.end();it1++)
    {
        cout<<it1->second<<" "<<it2->second<<endl;
    }
    return 0;
}
