#include<bits/stdc++.h>
#include<unordered_map>
#define ll long long int
#define pb push_back
#define readv(v) for(auto& it : v)cin>>*it;
using namespace std;

void solve(){
    ll x,n,m;
    cin>>x>>n>>m;
    while(x>20&&n>0){
        x=x/2;
        x+=10;
        //cout<<x<<endl;
        n--;
    }
    while(m){
        x-=10;
        m--;
    }
    if(x>0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}