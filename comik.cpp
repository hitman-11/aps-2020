#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int i,cond,n;
	    cin>>n;
	    string s[n];
	    for(i=0;i<n;i++){
	       cin>>s[i];}
	    for(i=0,cond=1;(i<n)&&cond;i++){
	       if(s[i]=="cookie"){
	         if(s[i+1]!="milk")
	         cond=0;
	         
	           
	       }
	        
	    }
	    if(cond)
	      cout<<"YES"<<endl;
	    else
	      cout<<"NO"<<endl;
	    
	}
	return 0;
}
