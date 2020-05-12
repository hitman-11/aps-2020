#include<stdio.h>
int main()
{
    int n,k,t,i,c=0;
    scanf("%d%d",&n,&k);
   
    for (i=0;i<n;i++)
    {
         scanf("%d",&t);
        if (t%k==0)
        {
            c++;
        }
                   
    }
                 printf("%d\n",c);    

}
  
