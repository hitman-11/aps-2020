#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum,p,test,count,ksum,k,n,i;
    char arr[500000];
    cin>>test;
    while(test--)
    {
        cin>>arr;
        count=0;
        n=strlen(arr);
        k='c'*'h'*'e'*'f';
        ksum='c'+'h'+'e'+'f';
        
        for(i=0;i<n-3;i++)
        {
            p=arr[i]*arr[i+1]*arr[i+2]*arr[i+3];
            sum=arr[i]+arr[i+1]+arr[i+2]+arr[i+3];
            if(p==k&&ksum==sum)
                count++;
        }
        if(count==0)
            cout<<"normal\n";
        else
            cout<<"lovely "<<count<<"\n";
    }
    return 0;
}
 