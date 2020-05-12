#include <iostream>
using namespace std;
#define int long long int
int size[100000];
int arr[100000];

	void init(int arr[],int n)
	{
	    for(int i=0;i<n;i++)
	    {
	        arr[i]=i;
	        size[i]=i;
	    }
	}
	int root(int arr[],int i)
	{
	    while(arr[i]!=i)
	    {
	        arr[i]=arr[arr[i]];
	        i=arr[i];
	    }
	    return i;
	}
	int dsu(int arr[],int size[],int a,int b)
	{
	    int root_a=arr[a];
	    int root_b=arr[b];
	    if(size[root_a]<size[root_b])
	    {
	        arr[root_a]=arr[root_b];
	        size[root_a]=+size[root_b];
	    }
	    else
	    {
	        arr[root_b]=arr[root_a];
	        size[root_a]+=size[root_b];
	    }
	}
	bool find(int arr[],int a , int b)
	{
	    if(arr[a]==arr[b])
	    {
	        return true;
	        
	    }
	    else
	    {
	        return false;
	    }
	}
	
int32_t main()
{
    int n,m;
    cin>>n>>m;
    int arr[20000];
    int i,j,k;
    int flag =1;
    for(int i=0;i<m;i++)
    {
        cin>>j>>k;
        init(arr,n);
        if(root(arr,j)==root(arr,k))
        {
         flag=0;
        }
        else
        {
            dsu(arr,size,j,k);
            
        }
    }
    if(m==n-1 && flag==1)
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }

	return 0;
}
	