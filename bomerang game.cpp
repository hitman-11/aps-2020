#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int row, col,t,p=0;
    cin >> row >> col >> t;
    
    vector<string> a(row);
    vector<string> b2(row);
    vector<string> b3(row);
    vector<string> b4(row);
    vector<string> b5(row);
    vector<string> b(row);
    string val;
    for(int i=0;i<row;i++)
        {
       
            cin >> val;
            a[i]=val;
       
    }
        for(int i=0;i<row;i++)
        {
        for(int j=0;j<col;j++)
            {
            b2[i] += '.';
            b[i] += '.';
             b3[i] += '.';
             b4[i] += '.';
             b5[i] += '.';
        }
    }
    b=a;
    b2=a;
    b3=a;
    b4=a;
    b5=a;
    if(t==1)
        {
       
            for(int i=0;i<row;i++)
        {
       
           cout << b2[i] << endl;
       
    }
        return 0;
    }
 
        
    
    for(int i=2;i<=5;i++)
        {
        
        if(i==2)
            {
            for(int i=0;i<row;i++)
                   {
                     for(int j=0;j<col;j++)
                         {
                         if(a[i][j]=='.')
                            {
                            b2[i][j]='O';
                              b[i][j]='O';
                             b3[i][j]='O';
                             b4[i][j]='O';
                             b5[i][j]='O';
                        }
                  
                     }
                        
              }
        }
        else if(i==3)
            {
            for(int k=0;k<row;k++)
                   {
                     for(int l=0;l<col;l++)
                         {
                         if(a[k][l]=='O')
                            {b[k][l]='.';
                             if(row==1 && l==0)
                                 {
                                 b[k][l+1]='.';
                             }
                             else if(row==1 && l==col-1)
                                 {
                                 b[k][l-1]='.';
                             }
                             else if(row==1 && l!=0 && l!=col-1)
                                 {
                                 b[k][l-1]='.';
                                 b[k][l+1]='.';    
                             }
                             else if(k!=0 && k!=row-1 && l!=0 && l!=col-1)
                                 {
                                 
                              
                           
                             b[k-1][l]='.';
                                 b[k][l-1]='.';
                                 b[k+1][l]='.';
                                 b[k][l+1]='.';
                            
                             }
                             else if(k==0 && l!=0 && l!=col-1)
                                 {
                                 b[k][l-1]='.';
                                 b[k+1][l]='.';
                                 b[k][l+1]='.';
                             }
                             else if(k==0 && l==0)
                                 {
                                 
                                 b[k+1][l]='.';
                                 b[k][l+1]='.';
                             }
                             else if(k==0 && l==col-1)
                                 {
                                 b[k][l-1]='.';
                                 b[k+1][l]='.';
                                 
                             }
                             else if(l==0 && k==row-1)
                                 {
                                 
                                 
                                 b[k][l+1]='.';
                                 b[k-1][l]='.';
                             }
                             else if(k==row-1 && l==col-1)
                                 {
                                 b[k][l-1]='.';
                                 b[k-1][l]='.';
                             }
                             else if(k!=0 && k!=row-1 && l==col-1)
                                 {
                                 b[k][l-1]='.';
                                 b[k+1][l]='.';
                                 b[k-1][l]='.';
                             }
                             else if(l==0 && k!=row-1 && k!=0)
                                 {
                                 b[k][l+1]='.';
                                 b[k-1][l]='.';
                                 b[k+1][l]='.';
                             }
                             else if(k==row-1 && l!=0 && l!=col-1)
                                 {
                                 b[k][l-1]='.';
                                 b[k][l+1]='.';
                                 b[k-1][l]='.';
                             }
                             
                             
                        }
                  
                     }
                        
              }
            for(int k=0;k<row;k++)
            {
            for(int l=0;l<col;l++)
                {
                a[k][l]=b[k][l];
                b3[k][l]=b[k][l];
            }
        }
        }
        else if(i==4)
            {
            for(int i=0;i<row;i++)
                   {
                     for(int j=0;j<col;j++)
                         {
                         if(a[i][j]=='.')
                            {
                            b[i][j]='O';
                             b4[i][j]='O';
                        }
                  
                     }
                        
              }
        }
        else if(i==5)
            {
            for(int k=0;k<row;k++)
                   {
                     for(int l=0;l<col;l++)
                         {
                         if(a[k][l]=='O')
                            {b[k][l]='.';
                             if(row==1 && l==0)
                                 {
                                 b[k][l+1]='.';
                             }
                             else if(row==1 && l==col-1)
                                 {
                                 b[k][l-1]='.';
                             }
                             else if(row==1 && l!=0 && l!=col-1)
                                 {
                                 b[k][l-1]='.';
                                 b[k][l+1]='.';    
                             }
                             else if(k!=0 && k!=row-1 && l!=0 && l!=col-1)
                                 {
                                 
                              
                           
                             b[k-1][l]='.';
                                 b[k][l-1]='.';
                                 b[k+1][l]='.';
                                 b[k][l+1]='.';
                            
                             }
                             else if(k==0 && l!=0 && l!=col-1)
                                 {
                                 b[k][l-1]='.';
                                 b[k+1][l]='.';
                                 b[k][l+1]='.';
                             }
                             else if(k==0 && l==0)
                                 {
                                 
                                 b[k+1][l]='.';
                                 b[k][l+1]='.';
                             }
                             else if(k==0 && l==col-1)
                                 {
                                 b[k][l-1]='.';
                                 b[k+1][l]='.';
                                 
                             }
                             else if(l==0 && k==row-1)
                                 {
                                 
                                 
                                 b[k][l+1]='.';
                                 b[k-1][l]='.';
                             }
                             else if(k==row-1 && l==col-1)
                                 {
                                 b[k][l-1]='.';
                                 b[k-1][l]='.';
                             }
                             else if(k!=0 && k!=row-1 && l==col-1)
                                 {
                                 b[k][l-1]='.';
                                 b[k+1][l]='.';
                                 b[k-1][l]='.';
                             }
                             else if(l==0 && k!=row-1 && k!=0)
                                 {
                                 b[k][l+1]='.';
                                 b[k-1][l]='.';
                                 b[k+1][l]='.';
                             }
                             else if(k==row-1 && l!=0 && l!=col-1)
                                 {
                                 b[k][l-1]='.';
                                 b[k][l+1]='.';
                                 b[k-1][l]='.';
                             }
                             
                             
                        }
                  
                     }
                        
              }
            for(int k=0;k<row;k++)
            {
            for(int l=0;l<col;l++)
                {
                a[k][l]=b[k][l];
                b5[k][l]=b[k][l];
            }
        }
        }
        
       /* */
    }
    t=t%4;
    if(t==2)
    {for(int i=0;i<row;i++)
        {
       
           cout << b2[i] << endl;
       
    }
    }
    else if(t==3)
        {
        for(int i=0;i<row;i++)
        {
       
           cout << b3[i] << endl;
       
    }
    }
    else if(t==0)
        {
        for(int i=0;i<row;i++)
        {
       
           cout << b4[i] << endl;
       
    }
    }
    else if(t==1)
        {
        for(int i=0;i<row;i++)
        {
       
           cout << b5[i] << endl;
       
    }
    }
    
    return 0;
}
