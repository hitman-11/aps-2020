#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int isprime(int N){
    if(N<2 || (!(N&1) && N!=2))
        return 0;
    for(int i=3; i*i<=N; i+=2){
        if(!(N%i))
            return 0;
    }
    return 1;
}
int main()
{
        
    int a,b,c,n,m,t,l;
    cin>>t;
    //int n[t];
    while(t--)
    {
       
    cin >>a>>b;
    c=m=0;
    //n=a+b+c;
     //l=isprime();
    while(m!=1)
    {
    
        n=a+b+c;
        m=0;
        m=isprime(n);
        
        if(c==0&&m==1)m=0;
        c++;
        //cout<<n<<" ";
        
    }
    cout<<c-1<<endl;
    
    }
   return 0;
}