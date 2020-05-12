#include<stdio.h>
int main()
{
    int n,i,t,s[300],j[300];
    int c=0;
    scanf("%d\n",&t);
    while(t--)
    {
    scanf("%d\n",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
        scanf("%d",&j[i]);
    }
    for (i=0;i<n;i++)
    {
        if (j[i]-s[i]>5)
        c=c+1;
    }
    printf("%d\n",c);
    c=0 ;
}    
}