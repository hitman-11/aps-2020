#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,a,b,t,prev,count,temp,x,f,k;
    char arr[1000];
    cin>>t;
    while(t--)
    {
        i=0;
        a=0;
        b=0;
        count=0;
        prev=0;
        x=1;
        f=0;
        cin>>arr;
        n=strlen(arr);
        
        cin>>k;
        while(i<n)
        {
            if(arr[i]=='a')
            {
                a++;
            }
            else
                b++;
            if(a>b)
            {
                count++;
                f++;
            }
            i++;
        }
        temp=count;
        while(prev!=count&&x<k)
        {
            prev=count;
            count=0;
            for(i=0;i<n;i++)
            {
                if(arr[i]=='a')
                {
                    a++;
                }
                else
                    b++;
                if(a>b)
                {
                    count++;
                    f++;
                }
            }
            temp=count;
            x++;
        }
        f=f+((k-x)*temp);
        cout<<f<<"\n";
        
        }
    }