#include<stdio.h>
int main(){
    int flag=0;
        long int H,W,a[100][100],area=0;
        scanf("%ld",&H);
        scanf("%ld",&W);
        for(int i=0;i<H;i++){
            for(long int j=0;j<W;j++)
            scanf("%ld",&a[i][j]);
        }
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            for(int k=1;k<a[i][j]+1;k++){
                //down
                if(k==1)
                area++;
                //top
                if(k==a[i][j])
                area++;
                //side 1
                if(i==0)
                area++;
                else if(k-a[i-1][j]>0)
                area++;
                //side 2
                if(j==W-1)
                area++;
                else if(k-a[i][j+1]>0)
                area++;
                //side 3
                if(i==H-1)
                area++;
                else if(k-a[i+1][j]>0)
                area++;
                //side 4
                if(j==0)
                area++;
                else if(k-a[i][j-1]>0)
                area++;
            }
        }
    }
    printf("%ld",area);
    return 0;
}
