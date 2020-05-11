#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t , b , theatre[4][4] , n ;
    char a ;
    cin>>t ;
    vector<int> profit ;
    while(t--)
    {
        vector<int> profit_row ;
        cin>>n ;
        if(n==0)
        {
            cout<<"-400"<<endl ;
            profit.push_back(-400) ;
            continue ;
        }
        memset(theatre,0,sizeof(theatre)) ;
        while(n--)
        {
            cin>>a>>b ;
            // cout<<a-65<<endl ;
            theatre[a-65][b/3-1]+=1 ;
        }
        // for(int i = 0 ; i < 4; i++)
        // {
        //     for(int j = 0 ; j < 4 ; j++)
        //     {
        //         cout<<theatre[i][j]<<" " ;
        //     }
        //     cout<<endl ;
        // }
        int permute_this[] = {0,1,2,3} ;
        do{
            int count_zeroes = 0 ;
            vector<int> temp{theatre[0][permute_this[0]] , theatre[1][permute_this[1]] ,
            theatre[2][permute_this[2]] , theatre[3][permute_this[3]]} ;
            sort(temp.begin(),temp.end(),greater<int>()) ;
            for(int i = 0 ; i < 4 ; i++)
            {
                if(temp[i]==0)
                {
                    count_zeroes++ ;
                }
            }
            // for(int i = 0 ; i < 4 ; i++)
            //     cout<<temp[i]<<" " ;
            // cout<<endl ;
            // cout<<count_zeroes<<endl ;
            count_zeroes = count_zeroes*100 ;
            int sum = 100*temp[0] + 75*temp[1] + 50*temp[2] + 25*temp[3] ;
            sum-=count_zeroes ; 
            profit_row.push_back(sum) ;
        }while(next_permutation(permute_this,permute_this+4)) ;
        int max_row = *max_element(profit_row.begin(), profit_row.end()) ;
        cout<<max_row<<endl ;
        profit.push_back(max_row) ;
    }
    cout<<accumulate(profit.begin() , profit.end() , 0)<<endl ; 
	return 0;
}
