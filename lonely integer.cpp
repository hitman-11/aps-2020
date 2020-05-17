#include <iostream> 
using namespace std; 
  
int unique(int arr[], int n) 
    { 
         
        int res=0 ;
        for (int i=0; i<n; i++)
        { 
            res = res^arr[i];
        } 
        cout<<res;
        return 0; 
    } 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unique(arr,n);

}    
