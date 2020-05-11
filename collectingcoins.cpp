#include <bits/stdc++.h>

using namespace std;

int main() 
{

	
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) 
	{
		int a[3], n;
		cin >> a[0] >> a[1] >> a[2] >> n;
		sort(a, a + 3);
		int x = a[2]-a[0];
		int q = a[2]-a[1];
		int d = n-x-q;
		if (d < 0 || d % 3 != 0) 
		{
			cout << "NO" << endl;
		} 
		else 
		{
			cout << "YES" << endl;
		}
	}
	
	return 0;
}