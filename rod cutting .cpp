#include <iostream>
using namespace std;
int cutrod(int p[], int n)
{
    int r[n + 1];
    r[0] = 0;
    for (int j = 0; j < n; j++)
    {
        int q = INT_MIN;
        for (int i = 0; i <= j; i++)
        {
            q = max(q, p[i] + r[j - i]);
        }
        r[j + 1] = q;
    }
    return r[n];
}
int main()
{
    int price[] = {1, 5, 8, 9, 10};
    cout << cutrod(price, 5);
    return 0;
}
