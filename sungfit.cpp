#include <iostream>
#include<algorithm>
using namespace std;
long long int arr1[100000001];
long long int arr2[100000001];
int main() 
{
	long long int t,n,total;
	cin>>t;
	while(t--)
	{
	    total=0;
	    cin>>n;
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>arr1[i];
	        
	    }
	    for(long long int j=0;j<n;j++)
	    {
	        cin>>arr2[j];
	    }
	    
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+n);
        for(long long int i=0;i<n;i++)
        {
            total+=min(arr1[i],arr2[i]);
            
        }
        cout<<total<<endl;
	    
	    
	}
}
