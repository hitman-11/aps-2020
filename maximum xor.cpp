#include <bits/stdc++.h>

using namespace std;

// Complete the maximizingXor function below.
int maximizingXor(int l, int r) 
{
    int q = l ^ r, a = 1;
    while(q)
    {
        q /= 2;
        a <<= 1;
    }
    return --a;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int l;
    cin >> l;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int r;
    cin >> r;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = maximizingXor(l, r);

    fout << result << "\n";

    fout.close();

    return 0;
}
