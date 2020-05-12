#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,z;
    scanf("%f%f",&x,&y);
    
    if (x<0 || x>y || fmod(x , 5.0 )!=0)
    {
        
        printf("%.2f",y);
    }
    else
    {
        z=y-x-0.50;
        if (z>=0)
        printf("%.2f",z);
        else 
        printf("%.2f",y);
    }
}