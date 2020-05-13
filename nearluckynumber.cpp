#include <bits/stdc++.h> 
using namespace std; 
#define int long long int
int frequencyDigits(int n) 
{    
    int c = 0; 
      
    while (n > 0)
    { 
        if (n % 10 == 4 or n%10 ==7) 
            c++; 
        n = n / 10; 
    } 
      
    return c; 
} 
  
int32_t main() 
{ 
      int n;
      cin>>n;
      
    int x = frequencyDigits(n); 
    if(x==4 or x==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0; 
} 