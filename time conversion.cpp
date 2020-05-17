#include<bits/stdc++.h>
using namespace std;
void convert(string s)
{
    char arr[100];
    strcpy(arr, s.c_str());
    if(arr[8]=='A')
    {
        if(arr[0]=='1'&&arr[1]=='2')
        {
            cout<<0;
            cout<<0;
            for(int i=2;i<8;i++)
            {
                cout<<arr[i];
            }
        }
        else
        {
            for(int i=0;i<8;i++)
            {
                cout<<arr[i];
            }
        }
    }
    else
    {
        if(arr[0]=='0')
        {
            if(int(arr[1]-48)+2<=9)
            {
                cout<<"1";
                cout<<(arr[1]+2-48);
                for(int i=2;i<8;i++)
                {
                    cout<<arr[i];
                }
            }
            else  
            {
                cout<<"2";
                int x;
                x=int(arr[1]-48)+2;
                x=x%10;
                cout<<x;
                for(int i=2;i<8;i++)
                {
                    cout<<arr[i];
                }
            }
        }
        else 
        {
            if(arr[0]=='1'&&arr[1]=='2')
            {
               for(int i=0;i<8;i++)
                {
                    cout<<arr[i];
                } 
            }
            else  {
            
                cout<<"2";
                int x;
                x=int(arr[1]-48)+2;
                x=x%10;
                cout<<x;
                for(int i=2;i<8;i++)
                {
                    cout<<arr[i];
                }
        }
        }
    }
}
int main()
{
    string s;
    cin>>s;
    convert(s);
    return 0;
}
