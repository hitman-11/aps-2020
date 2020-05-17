#include <iostream>

using namespace std;

int main()
{
    int H[26];
    for(int i = 0; i < 26; ++i)
       cin >> H[i];

    string word;
    cin >> word;
    
    int h = 0;
    for(char i : word)
        if(H[(int)i-97] > h) h = H[(int)i-97];
    
    cout << h * word.size() << endl;
    
    return 0;
}
