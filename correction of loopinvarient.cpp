#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int s,arr[100001];
    cin>>s;
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+s);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
