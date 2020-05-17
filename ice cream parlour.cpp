#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,m,n,j,arr[100001];
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(int i=0;i<n;i++)
        {
             j=0;

        cin>>arr[i];
        while(arr[j]+arr[i]!=m&&j<i)
        {
            j++;
        }
        if(arr[i]+arr[j]==m&&i>j)
        {

            cout<<j+1<<" "<<i+1<<endl;
        }
          
        }

    }
}
