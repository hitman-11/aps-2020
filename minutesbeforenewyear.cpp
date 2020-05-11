#include <bits/stdc++.h>

using namespace std;

int main() 
{

	
	int t;
	cin>>t;
	for (int i=0;i<t;++i) 
	{
		int h, m;
		cin>>h>>m;
		int x = (24*60) - (60*h)-m;
		cout<<x<<endl;
	}
	
	return 0;
}