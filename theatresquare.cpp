#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long int n,m,a;
    cin>>n>>m>>a;
    cout<<(((n-1)/a)+1)*(((m-1)/a)+1) <<endl;
}