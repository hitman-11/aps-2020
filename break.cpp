#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int t,s,n;
    
    
    cin>>t>>s;
    while(t--)
    {
     
        cin>>n;
      
        for(int i=0;i<n;i++)
        {   
            cin>>arr[i];
            
        }
      
        
        for(int i=0;i<n;i++)
        {
            
            cin>>arr1[i];
            
        }
       
       
            int jhanda = 0;

          
            for(int i=0;i<n;i++)
            {
                if(mask.find(arr[i])!=mask.end() and  arr[i]<arr1[i]  )
                {
                    mask.insert(arr[i]);
                    mask.insert(arr1[i]);
                    
                }
                else
                {
                    jhanda=1;
                    break;
                }
            }
            
            
            if(jhanda)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
      
    }
    return 0;
}