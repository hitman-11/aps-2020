#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t,n;
    cin >> t;
    while(t--)
    {
        
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int flag = 1;
        for(int i = 0; i < n-1; i++)
        {
            int j = arr[n-1]-arr[i];
            if(j%2!=0)
            {
                flag = 0;
                break;
            }
            
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
