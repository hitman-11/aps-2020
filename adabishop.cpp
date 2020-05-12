#include<bits/stdc++.h>
using namespace std;

int main() 
{
	
	int t,x,y;
	cin>>t;
	while(t--)
	{
	   
	   cin>>x>>y;
       if(x==1 and y==1)
       {
           cout<<"16"<<endl;
           //cout<<1<<" "<<1<<endl;
       }
       else if(x==2 and y==2 or x==3 and y==3 or x==4 and y==4 or x==5 and y==5 or x==6 and y==6 or x==7 and y==7 or x==8 and y==8)
       {
           cout<<"17"<<endl;
           //cout<<x<<" "<<y<<endl;
           cout<<1<<" "<<1<<endl;
       }
       else
       {
           cout<<"18"<<endl;
           //cout<<x<<" "<<y<<endl;
           cout<<(x+y)/2<<" "<<(x+y)/2<<endl;
           cout<<1<<" "<<1<<endl;
       }
        	   
	   //cout<<1<<" "<<1<<endl;
	   cout<<8<<" "<<8<<endl;
	   cout<<7<<" "<<7<<endl;
	   cout<<6<<" "<<8<<endl;
	   cout<<8<<" "<<6<<endl;
	   cout<<3<<" "<<1<<endl;
	   cout<<1<<" "<<3<<endl;
	   cout<<5<<" "<<7<<endl;
	   cout<<4<<" "<<8<<endl;
	   cout<<8<<" "<<4<<endl;
	   cout<<5<<" "<<1<<endl;
	   cout<<1<<" "<<5<<endl;
	   cout<<3<<" "<<7<<endl;
	   cout<<2<<" "<<8<<endl;
	   cout<<8<<" "<<2<<endl;
	   cout<<7<<" "<<1<<endl;
	   cout<<1<<" "<<7<<endl;
	   
	   
	}
	return 0;
}