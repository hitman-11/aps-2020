
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  
  while(t--)
  {   int n; 
      int arr1[1001],arr2[1001],arr[10005]={0},max=0;
      cin>>n;
      
      for(int i=0;i<n;i++)
      cin>>arr1[i];
      
      for(int j=0;j<n;j++)
      cin>>arr2[j];
      
      for(int k=0;k<n;k++)
      {
          for(int a=arr1[k];a<arr2[k];a++)
          {arr[a]++;
            
            if(arr[a]>max)
            max=arr[a];
          
          }
      }
      
      cout<<max<<endl;
  }
    
    return 0;
}