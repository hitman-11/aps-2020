#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m,a[100000],b[100000],i,j,count,cond;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    for(i=0;i<n;i++)
	       cin>>a[i];
	    for(i=0;i<m;i++)
	       cin>>b[i];   
	    for(i=0,count=0;i<n;i++)    
	       {
	           for(j=0,cond=1;j<m&&cond;j++)
	              if(a[i]==b[j])
	              {
	                cond--;
	                count++;
	              }  
	       }
	   cout<<count<<endl;    
	}
	return 0;
}
