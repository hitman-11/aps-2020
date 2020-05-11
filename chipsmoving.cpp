#include <bits/stdc++.h> 
using namespace std; 
 
int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int even_count = 0; 
    int odd_count = 0; 
    for (int i = 0; i < n; i++)  
    { 
        int x = arr[i] ; 
        if (x % 2 == 0) 
            even_count++; 
        else
            odd_count++; 
    } 
    
    if(even_count>odd_count)
    {
        cout<<odd_count;
    }
    else
    {
        cout<<even_count;
    }
    

}