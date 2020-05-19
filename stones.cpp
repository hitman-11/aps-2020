#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	string s, j;
	cin>>t;
	
	while(t--){
	    
	    int sum=0;
	   cin>>j;
	   cin>>s;
	   
	   for(int i=0; i<s.length(); i++){
	       for(int k=0;k<j.length();k++){
	           if(s[i]==j[k]){
	               sum++;
	               break;
	           }
	       }
	   }
	   
	   cout<<sum<<endl;
	}
	return 0;
}
