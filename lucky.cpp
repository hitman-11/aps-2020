#include <iostream>
using namespace std;

int main() {
 int t,b,c=0;
 long int a;
 cin>>t;
 while(t--)
 {
     a=b=c=0;
     cin>>a;
     while(a!=0)
     {
         b=a;
         if(b==4)c++;
         a=a/10;
     }
     cout<<c<<endl;
    
 }
  return 0;
}