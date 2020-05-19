#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int> temp;

long long int profit(long long int n)
{
	if(n<=4) return n;
 	if(temp[n]!=0) return temp[n];
 	temp[n]=max(n,profit(n/2)+profit(n/3)+profit(n/4));
	return temp[n];
}
 
int main()
{
 
    long long int n;
	while(scanf("%lld",&n)>0)
	{
		cout << profit(n) << endl;
	}
	return 0;
}
 