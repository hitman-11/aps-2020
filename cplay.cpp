#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,r=0,c=0,a,b,arr[10000000][20],flag,ninja,net,tempa,tempb,k;
    char x;
   /* do{
        cin>>x;
        cout<<x;//<<"\n";
    }while(cin);*/
    while(cin)
    {
        cin>>x;
        arr[r][c]=x-48;
        c++;
        if(c ==0)
        {
            r++;
            c=0;
        }
    }
   /* for(i=0;i<r;i++)
    {
        for(j=0;j<20;j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }*/
    for(i=0;i<r;i++)
    {
        a=0;
        b=0;
        flag=0;
        ninja=0;
        for(j=0;j<10;j++)
        {
            if(j%2==0&&arr[i][j]>0)
            {
                a++;
            }
            else  if(j%2==1&&arr[i][j]>0)
            {
                b++;
            }
        }
       // cout<<a<<b<<"**";
        if(a>b)
        {
            cout<<"TEAM-A ";
            ninja=1;
        }
        else if(b>a)
        {
            cout<<"TEAM-B ";
            ninja=2;
        }
        else
        {
           k=10;
           while(flag==0&&k<20)
           {
               if(arr[i][k]>arr[i][k+1])
               {
                   cout<<"TEAM-A "<<k+2<<"\n";
                   flag=1;
               }
               if(arr[i][k+1]>arr[i][k])
               {
                    cout<<"TEAM-B "<<k+2<<"\n";
                    flag=1;
               }
               else
                k=k+2;
                
           }
           if(flag==0)
            cout<<"TIE\n";
        }
        net=5;
        tempa=0;
        tempb=0;
        if(ninja==1)
        {
            for(j=0;j<10;j+=2)
            {
                if(arr[i][j]>0)
                    tempa++;
                if(tempa>tempb+net)
                {
                    cout<<j+1<<"\n";
                    break;
                }
                if(arr[i][j+1]>0)
                    tempb++;
                net--;
                if(tempa>tempb+net)
                {
                    cout<<j+2<<"\n";
                    break;
                }
                //net--;
            }
        }
        net=5;
        if(ninja==2)
        {
            for(j=0;j<10;j+=2)
            {
                if(arr[i][j]>0)
                {
                    tempa++;
                }
                net--;
                if(tempb>tempa+net)
                {
                    cout<<j+1<<"\n";//<<tempa<<" "<<tempb<<" "<<net;
                    break;
                }
                else
                {
                    
                
                if(arr[i][j+1]>0)
                    tempb++;
                if(tempb>tempa+net)
                {
                    cout<<j+2<<"\n";
                    break;
                    
                }
                }
                //net--;
            }
        }
        
    }
    return 0;
}




















