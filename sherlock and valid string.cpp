#include<bits/stdc++.h>

using namespace std;
int main()
{

    string s, flag="YES", temp;
    int len, total, main, freq=0;
    char c;

    cin>>s;

    temp = s;
    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
    
    len = temp.length();

    for(int i=0; i<len; i++) {
        c     = temp[i];
        total = count(s.begin(), s.end(), c);

        if(i==0) main = total;
        if((i!=0) && (total != main)) freq++;
        if(freq>=2) flag = "NO";
    }

    cout<<flag<<endl;

    return 0;
}
