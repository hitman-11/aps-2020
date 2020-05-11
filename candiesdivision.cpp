#include<bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    int y = 0,z;
    int x;
    int n,k;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        if(n%k==0)
        {
            cout<<n<<endl;
        }
        else
        {
            int x = floor(n/k);
            int z = floor(k/2)  ;
            y = n - n% k;
		    y+= min(n%k,z);
		    cout<<y<<endl;
            
        }
        
    }
    
}