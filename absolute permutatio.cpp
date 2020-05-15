#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n,k,dev;
cin >> t;

while(t--)
{
    cin >> n >> k;
    dev=n/k;
    vector<int> pos(n);
    if(k==0)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
    }
    else if ((k<=n/2)&&(n%k==0)&&(dev%2 ==0))
    {
            for(int i=0;i<n;i++)
            {
                    if((i/k)%2 == 0)
                    {
                            pos[i] = i+k+1;
                    }
                    else
                    {
                        pos[i] = i-k+1;
                    }
                }
            for (int i = 0; i< n; i++)
                    cout << pos[i] <<" ";
    }
    else   cout << "-1";
    cout <<endl;
    }
    return 0;
}
