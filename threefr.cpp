#include<stdio.h>
int main()
{
    int t,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&x,&y,&z);

        if (x+z==y||x+y==z||z+y==x)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
            
    }
}