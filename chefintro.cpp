#include <iostream>
using namespace std;

int main()
{
	long long int n,r,R[2000];
	cin>>n>>r;
	for(int i=0;i<n;i++)
	{
	    cin>>R[i];
	}
	for(int i=0;i<n;i++)
	{
	    if(R[i]>=r)
	    {
	        cout<<"Good boi"<<endl;
	    }
	    else
	    {
	        cout<<"Bad boi"<<endl;
	    }
	}
	return 0;
}