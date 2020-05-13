#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    
        cin>>n;
        int arr[1001];
        int brr[1001];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1; i<=n;i++)
	    {
		    brr[arr[i]] = i;
	    }
	    for(int j=1;j<=n;j++)
	    {
	        cout<<brr[j]<<" ";
	    }
        
}
