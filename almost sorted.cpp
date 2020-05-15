#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,j,temp;
    cin >> n;
    int arr[n],arr2[n];
    cin>>arr[0];
    arr2[0]=arr[0];
    for(i=1;i<n;i++)
    {
        cin>>temp;
        if(temp<arr[i-1])
        {
            c++;
        }
        arr[i]=temp;
        arr2[i]=temp;
    }
    sort(arr2,arr2+n);
    if(c==0)
    {
        cout<<"yes";
    }
    else if(c<=2)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]!=arr2[i])
            {
                for(j=i+1;j<n;j++)
                {
                    if(arr[j]==arr2[i])
                    {
                        if(arr[i]>=arr[j-1])
                        {
                            if(j!=n-1)
                            {
                                if(arr[i]<arr[j+1])
                                {
                                    cout<<"yes"<<endl<<"swap "<<i+1<<" "<<j+1;
                                }
                                else
                                {
                                    cout<<"no";
                                }
                            }
                            else
                            {
                                cout<<"yes"<<endl<<"swap "<<i+1<<' '<<j+1;
                            }
                        }
                        else
                        {
                            cout<<"no";
                        }
                        n=0;
                        break;
                    }
                }
            }
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]!=arr2[i])
            {
                for(j=i+1;j<n;j++)
                {
                    if(arr[j-1]<arr[j])
                    {
                        break;
                    }
                }
                c=j+1;
                for(j=c;j<n;j++)
                {
                    if(arr[j-1]>arr[j])
                    {
                        cout<<"no";
                        n=0;
                        break;
                    }
                }
                break;
            }
        }
        if(n!=0)
        {
            cout<<"yes"<<endl<<"reverse "<<i+1<<' '<<c-1;
        }
    }
}
