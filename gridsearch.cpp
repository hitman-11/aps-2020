#include<bits/stdc++.h>
using namespace std;
int t,R,r,C,c;
char a[1001][1001],b[1001][1001];
int find_grid() {
    int flag2,flag3;
    for(int i=1; i<=R-r+1; i++) {
        flag3=0;
        for(int j=1; j<=C-c+1; j++) {
            flag2=0;
            if(a[i][j]==b[1][1]&&a[i][j+c-1]==b[1][c]&&a[i+r-1][j]==b[r][1]&&a[i+r-1][j+c-1]==b[r][c]) {
                flag2=1;
                for(int y=1; y<=r; y++)
                    for(int x=1; x<=c; x++)
                        if(b[y][x]!=a[i+y-1][j+x-1])
                            flag2=0;
            }
            if(flag2) {
                flag3=1;
                break;
            }
        }
        if(flag3) return 1;
    }
    return 0;
}
int main() {
    ios::sync_with_stdio(false);
    cin>>t;
    while(t--) {
        cin>>R>>C;
        for(int i=1; i<=R; i++)
            for(int j=1; j<=C; j++)
                cin>>a[i][j];
        cin>>r>>c;
        for(int i=1; i<=r; i++)
            for(int j=1; j<=c; j++)
                cin>>b[i][j];
        if(find_grid()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
