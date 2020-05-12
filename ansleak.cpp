#include <bits/stdc++.h>
#define int long long 
using namespace std;
int t;
int n, m, k;
vector<int>correct(500+5);

int32_t main()
{
	cin>>t;
	
	
    while(t--)
    {
        
        cin>>n>>m>>k;
        int ques[n][k];
      	for(int i=0; i<n; i++)
      	{
      	    for(int j=0; j<k; j++)
      	    {
      	        cin>>ques[i][j];
      	    }
      	    
      	}
      	int count[m+1];
      	for(int i=1;i<=m;i++)
      	{
      	    count[i]=0;
      	}
      	
      	
      	for(int i=0; i<n; i++)
      	{
      	    int lol=0, ans,g; 
      	    memset(count,0,sizeof(count));
              
      	    for(int j=0; j<k; j++)
      	    {
      	        count[ques[i][j]]++;
      	    }    
      	   ;
      	    for(int p=1; p<=m; p++)
      	    {
      	        g =  count[p]*10000;
      	        g = g/k;
      	      
      	        if(g>lol)
      	        {
      	        	lol = g;
      	        	ans = p;
      	        }
      	    }
      	   
      	     correct[i] = ans;
      	   
      	}
     	
        for(int i=0; i<n; i++)
        {
            cout<<correct[i]<<" ";
            
        }
        cout<<endl;
        
      }
}