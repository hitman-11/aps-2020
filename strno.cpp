#include<bits/stdc++.h>
#define int long long int
using namespace std;


int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
      
        int n,k;
        cin>>n>>k;
        int i;
        vector<int> vec;
        while(n % 2 == 0)
        {
            vec.push_back(2);
            n = n/2; 
        }
       
        for(i = 3; i <= sqrt(n); i=i+2)
        {   
            while(n % i == 0)
            {
                 n = n/i;
                 vec.push_back(i);
            }
        }
        if(n > 2)
        {
            vec.push_back(n);
        }
        if(vec.size() < k)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
        
        
       
    
    }
    
}
