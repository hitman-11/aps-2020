#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,len1,len2,x,y;
    char a[100001],b[100001];
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        len1=strlen(a);
        len2=strlen(b); 
        a[len1]=b[len2]=95;
        len1++;
        len2++;
        a[len1]=b[len2]='\0';
        x=y=0;
       
        while(x!=len1-1&&y!=len2-1)
        {
            if(strcmp(&a[x],&b[y])>0)
            {              
                cout<<b[y];
                y++;
            }
            else if(strcmp(&a[x],&b[y])<0)
            {              
                cout<<a[x];
                x++;
            }
            else
            {               
                cout<<a[x];
                x++;
            }
        }
        while(x!=len1-1)
        {           
            cout<<a[x];
            x++;   
        }
        while(y!=len2-1)
        {
            cout<<b[y];
            y++;
        }
        cout<<endl;
    }
     return 0;
}
