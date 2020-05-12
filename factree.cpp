// some code taken from https://github.com/pin3da/Programming-contest/blob/master/solved/SPOJ/COT2%20-%20Count%20on%20a%20tree%20II/solution.cc
#include <bits/stdc++.h>

using namespace std;

const int BLOCK_SIZE = 350;
#define MAXN   1000001
#define mod 1000000007
#define int long long int
int n;
// stores smallest prime factor for every number
int spf[MAXN];
 
// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
 
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
 
    // separately marking spf for every even
    // number as 2
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j=i*i; j<MAXN; j+=i)
 
                // marking spf[j] if it is not  
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
 
// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
unordered_map<int,int> getFactorization(int x)
{
    unordered_map<int,int> ret;
    while (x != 1)
    {
        ret[spf[x]]+=1;;
        x = x / spf[x];
    }
    return ret;
}
struct Graph {
  int N, L, timestamp;
  vector<int> cost, tin, tout, A;
  vector<vector<int>> adj, up;
  Graph(int n) : N(n), L(0), timestamp(0), cost(n), tin(n), tout(n), A(2 * n), adj(n), up(n) { }

  void AddEdge(int u, int v) {
      adj[u].emplace_back(v);
      adj[v].emplace_back(u);
    }

  void DFS(int node, int parent) {
      tin[node] = timestamp;
      A[timestamp] = node;
      timestamp++;
      up[node][0] = parent;
      for (int i = 1; i <= L; i++) {
            up[node][i] = up[up[node][i-1]][i-1];
          }
      for (auto to : adj[node]) {
            if (to != parent) {
                    DFS(to, node);
                  }
          }
      tout[node] = timestamp;
      A[timestamp] = node;
      timestamp++;
    }

  bool IsAncestor(int a, int b) {
      return tin[a] <= tin[b] && tout[a] >= tout[b];
    }

  int LCA(int a, int b) {
      if (IsAncestor(a, b)) return a;
      if (IsAncestor(b, a)) return b;
      for (int i = L; i >= 0; i--) {
             if (!IsAncestor(up[a][i], b)) {
                     a = up[a][i];
                    }
          }
      return up[a][0];
    }

  void PrepareLCA(int root) {
      L = 1;
      while ((1 << L) <= N) {
            L++;
          }
      for (int i = 0; i < N; i++) {
            up[i].resize(L + 1);
          }
      timestamp = 0;
      DFS(root, root);
    }
};


struct Query {
  int idx, l, r, lca;
  bool operator < (const Query& b) const {
      if ((l / BLOCK_SIZE) != (b.l / BLOCK_SIZE)) return l < b.l;
      if ((l / BLOCK_SIZE) & 1) return r > b.r;
      return r < b.r;
    }
};
unordered_map <int,int> uuu;
struct DS {
  vector<int> active, frec;
  int total;
  DS(int n) : active(n), frec(n), total(0) {}
  void Toggle(int idx, unordered_map<int,int> values[]) {
      if (active[idx]) {
            // frec[A[idx]]--;
            // if (frec[A[idx]] == 0) {
            //         total--;
            for (auto &itr: values[idx])
            {
                uuu[itr.first]-=itr.second;
            }
                  }
           else {
                // if (frec[[idx]] == 0) {
for (auto &itr: values[idx])
            {
                uuu[itr.first]+=itr.second;
            }
                      }
                // frec[A[idx]]++;
            //   }
      active[idx] ^= 1;
    }
  int Query() {
      int ss=1;
      for(auto & itr: uuu)
      {
          ss=(ss*(itr.second+1))%mod;
        //   cout<<"ii"<<itr.first<<" "<<itr.second+1<<endl;
      }
    //   cout<<" ss "<<ss<<endl;
      return ss;
    }
};

vector<int> SolveMo(vector<Query>& queries, unordered_map<int,int> values[], vector<int>& A) {
  vector<int> ans(queries.size());
  sort(queries.begin(), queries.end());
  int i = 0, j = -1; // [i, j)
  DS ds(n);
  for (int idx = 0; idx < (int)queries.size(); idx++) {
      const auto& q = queries[idx];
      while (i < q.l) ds.Toggle(A[i++], values);
      while (i > q.l) ds.Toggle(A[--i], values);
      while (j < q.r) ds.Toggle(A[++j], values);
      while (j > q.r)  ds.Toggle(A[j--], values);
      int add_lca = (q.lca != A[q.l]) && (q.lca != A[q.r]);
      if (add_lca) ds.Toggle(q.lca, values);
      ans[q.idx] = ds.Query();
      if (add_lca) ds.Toggle(q.lca, values);
    }
  return ans;
}

void solve() {
    sieve();
  int  q,t;
  cin>>t;
  while(t--)
  {
  cin >> n;
  map<int, int> gen_id;
  unordered_map<int,int> values[n];
 uuu.clear();
  Graph g(n);
  for (int i = 0; i < n - 1; i++) {
      int u, v;
      cin >> u >> v;
      g.AddEdge(u - 1, v - 1);
    }

  g.PrepareLCA(0);
  for (int i = 0; i < n; i++) {
      int id;
      cin >> id;
     
      values[i] = getFactorization(id);
    }
cin>>q;

  vector<Query> queries(q);
  for (int i = 0; i < q; i++) {
      int u, v;
      cin >> u >> v;
      u--; v--;
      if (g.tin[u] > g.tin[v]) {
            swap(u, v);
          }
      int lca = g.LCA(u, v);
      queries[i].lca = lca;
      queries[i].idx = i;
      if (u == lca) {
            queries[i].l = g.tin[u];
            queries[i].r = g.tin[v];
          } else {
                queries[i].l = g.tout[u];
                queries[i].r = g.tin[v];
              }
    }
  vector<int> ans = SolveMo(queries, values, g.A);
  for (auto it : ans) {
      cout << it << endl;
    }
  }
}

int32_t main() {
#ifndef LOCAL
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#define endl '\n'
#endif
  solve();
  return 0;
}