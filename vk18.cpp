#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,flag,test,temp,temp1,odd,even,k,p,m,max=2;
    unsigned long long tot;
    int arr[2000005];
    arr[2]=1;
    cin>>test;
    while(test--)
    {
        flag=0;
        cin>>n;
       
        k=1;
        if(max<n*2)
        {
        for(i=max;i<=n*2;i++)
        {
            temp=i;
            odd=0;
            even=0;
            while(temp!=0)
            {
                temp1=temp;
                temp=temp/10;
                
                if(temp1%2==1)
                    odd+=temp1;
                else
                    even+=temp1;
            }
            arr[i]=abs(even-odd);
            
        }
        max=n*2;
        }    
        /*for(i=0;i<=n*2;i++)
        {
            cout<<i<<" "<<arr[i]<<"\n";
            //cout<<i;
        }*/
        flag=0;
        tot=0;
        m=1;
        p=1;
        for(i=2;i<=n*2;i++)
        {
            if(flag==1)
            {   
                p=arr[i]*m;
                m--;
            }
            if(flag==0)
            {
                p=arr[i]*m;
                m++;
            }
            if(i==n+1)
            {
                flag=1;
                m--;
                m--;
            }
            tot+=p;
            //cout<<i<<" "<<p<<"\n";
        }
        
        cout<<tot<<"\n";
    }
    return 0;
}
    
    
    
    
    
