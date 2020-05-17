#include <bits/stdc++.h>
#define lli long long int
#define MP make_pair
#define PB push_back
#define rep(i, a, b) for (lli i=a; i<b; i++)
using namespace std;
vector <long long int >countries[100000];

vector<long long int > g[1000000];
bool visited[1000000] ;
int c = 0 , var = 0 ;
vector<int> country[10000] ;
lli ver;
void dfs(long long int u)
{
    if(visited[u])
    {
        return ;
    }
    visited[u]=1;
    ver++;
    for(auto v: g[u])
    {
        if(!visited[v]) 
            dfs(v);

        
    }
}
int main()
{
long long int n , m , u , v , start , end,total ;
//cout<<"Enter number of nodes and edges : " ;
cin>>n>>m ;
while(m--)
{
cin>>u>>v ;
g[u].PB(v) ;
g[v].PB(u) ;
}

total = n*(n-1)/2;
  for(long long i=0;i<n;i++){
        ver=0;
        dfs(i);
        total=total-ver*(ver-1)/2;
    }
    cout<<total;
    return 0;
}
