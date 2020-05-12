#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fi first
#define se second
#define pub push_back
#define mkp make_pair
#define pi pair<int,int>
#define push push
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<<endl;}}
#define print1d(mat,n){for(int i=0;i<(int)(n);i++)cout<<mat[i]<<" ";cout<<endl;}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<endl;
#define init(v,x) for (auto &itr:v){itr=x;}
#define minpq(x) x,vector<x>,greater<x>
#define ln length()
#define sz size()
#define inf 1e18;
using namespace std;
int tree[800005],a[200005];
int tree1[800005];
void build(int node, int start, int en)
{
    if(start==en)
    {
        tree[node]+=a[start];
    }
    else
    {
        int mid=(start+en)/2;
        build(node*2,start,mid);
        build(node*2+1,mid+1,en);
        tree[node]+=tree[2*node]+tree[2*node+1];
    }
}
void update(int node, int start, int en, int idx,int val)
{
     if (start==en)
     {
         a[idx]+=val;
         tree[node]+=val;
     }
     else
     {
         int mid=(start+en)/2;
         if (mid>=idx)
         {
             update(node*2,start,mid,idx,val);
         }
         else
         {
             update(node*2+1,mid+1,en,idx,val);
         }
         tree[node]=tree[2*node]+tree[2*node+1];

     }

}
int query(int node, int start, int en, int l, int r)
{
    if (r<start || l>en)
    {
        return 0;
    }
    if (l<=start && r>=en)
    {
        return tree[node];
    }
    int mid=(start+en)/2;
    int q1=query(node*2,start,mid,l,r);
    int q2=query(node*2+1,mid+1,en,l,r);
    return q1+q2;
}
void build1(int node, int start, int en)
{
    if(start==en)
    {
        tree1[node]+=a[start];
    }
    else
    {
        int mid=(start+en)/2;
        build1(node*2,start,mid);
        build1(node*2+1,mid+1,en);
        tree1[node]+=tree1[2*node]+tree1[2*node+1];
    }
}
void update1(int node, int start, int en, int idx,int val)
{
     if (start==en)
     {
         a[idx]+=val;
         tree1[node]+=val;
     }
     else
     {
         int mid=(start+en)/2;
         if (mid>=idx)
         {
             update1(node*2,start,mid,idx,val);
         }
         else
         {
             update1(node*2+1,mid+1,en,idx,val);
         }
         tree1[node]=tree1[2*node]+tree1[2*node+1];

     }

}
int query1(int node, int start, int en, int l, int r)
{
    if (r<start || l>en)
    {
        return 0;
    }
    if (l<=start && r>=en)
    {
        return tree1[node];
    }
    int mid=(start+en)/2;
    int q1=query1(node*2,start,mid,l,r);
    int q2=query1(node*2+1,mid+1,en,l,r);
    return q1+q2;
}
int32_t main()
{
    fastIO
    int t,n,q,arr[100005],l,r,y,j,k,haha[100005];
    cin>>t;
    while(t--)
    {
        clr(tree,0);
        clr(tree1,0);
        vector <pair <int,int> > a1;
        vector <pair <int,int> > a2;
        cin>>n>>q;
        rep(i,0,n)
        {
            cin>>arr[i];
            if(i!=0)
            {
                a1.pub({min(arr[i],arr[i-1]),i});
                a2.pub({max(arr[i],arr[i-1]),i});
            }
        }
        sort (a1.begin(),a1.end());
        sort(a2.begin(),a2.end());
        vector <pair < pair <int,int> , pair<int,int> > > qu;
        rep(i,0,q)
        {
            cin>>l>>r>>y;
            qu.pub({{y,i},{l,r-1}});
        }
        sort(qu.begin(),qu.end());
        j=0;k=0;
        rep(i,0,q)
        {
            while(j<n-1 && a1[j].fi<=qu[i].fi.fi)
            {
                update(1,0,n,a1[j].se,1);
                j+=1;
            }
            while(k<n-1 && a2[k].fi<qu[i].fi.fi)
            {
                update1(1,0,n,a2[k].se,1);
                k+=1;
            }

            haha[qu[i].fi.se]=-((query1(1,0,n,qu[i].se.fi,qu[i].se.se))-(query(1,0,n,qu[i].se.fi,qu[i].se.se)));

        }
        rep(i,0,q)
        {
            cout<<haha[i]<<endl;
        }

    }
}

