#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int i,j,k;
	cin>>i>>j;
	k=max(i,j);
	
	    if (k==1)
	    {
	        cout<<"1"<<"/"<<"1";
	    }
	    
	     if (k==2)
	    {
	        cout<<"5"<<"/"<<"6";
	    }
	    
	    if (k==3)
	    {
	        cout<<"2"<<"/"<<"3";
	    }
	    if (k==4)
	    {
	        cout<<"1"<<"/"<<"2";
	    }	    
	    if (k==5)
	    {
	        cout<<"1"<<"/"<<"3";
	    }	
	    if (k==6)
	    {
	        cout<<"1"<<"/"<<"6";
	    }
    
}