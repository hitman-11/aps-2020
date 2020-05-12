#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,n;
    long long int  c,x,y,c1;
    scanf("%lld",&t);
    while (t--)
    {
        scanf("%lld",&n);
        x=n/26;
        y=n&;
        c=pow(2,x);
        c1=pow(2,x-1);
        
        if(y<3 && y!=0)
        {   
            printf("%lld 0 0\n",c);
        }
        else if(y<11 && y!=0)
        {
            printf("0 %lld 0\n",c);
        }
        else if (y<26 && y!=0)
        {
            printf("0 0 %lld\n",c);
        }
        else 
        {
            printf("0 0 %lld\n",c1);
        }
    }    
}