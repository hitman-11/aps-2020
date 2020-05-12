#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    int count = 0 , count1=0;
    for(int i=0;i<20;i++)
    {
        if (s1[i] ==  'z')
        {
            ++ count;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if (s1[i] ==  'o')
        {
            ++ count1;
        }
    }
    if(count1 ==2*count)
    {
        string s2 = "zoo";
        if (s1.find(s2) != std::string::npos)
        {
            std::cout << "Yes" << '\n';
        }
    }
    else 
    {
        cout<<"No"<<"\n";
    }
}
