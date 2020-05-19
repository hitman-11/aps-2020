#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int ispalindrome(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1])
        return 0;
    }
    return 1;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<string> strs(n);
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        strs[i]=s;
    }
    string res="";
    vector<int> dp(n,0);
    int count=0;
    for(int i=0;i<n;i++){
        if(dp[i]==0){
            for(int j=i+1;j<n;j++){
            if(dp[j]==0){
                string rev=strs[j];
                //cout<<rev<<" ";
            reverse(rev.begin(),rev.end());
            //cout<<rev<<endl;
            if(rev==strs[i]){
                dp[i]=1;
                dp[j]=1;
                count+=(m*2);
                res=strs[i]+res+strs[j];
              
                break;
            }
        }
           
        }

        }
    }

    for(int i=0;i<n;i++){
        if(dp[i]==0){
            if(ispalindrome(strs[i])){
                count+=m;
                res=res.substr(0,res.size()/2)+strs[i]+res.substr(res.size()/2,res.size()/2);
                break;
            }
        }
    }
    cout<<count<<endl;
    cout<<res<<endl;
}