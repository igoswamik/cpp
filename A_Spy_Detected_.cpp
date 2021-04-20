#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int *b, int x, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (b[i] == x)
        {
            cout << i + 1 << endl;
            return;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *b = new int[n];
        int x1 = -1, x1c = 0, x2 = -1, x2c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (x1 == -1)
            {
                x1 = b[i];
                x1c++;
            }
            else if (x1 == b[i])
            {
                x1c++;
            }
            else
            {
                x2 = b[i];
                x2c++;
            }
        }
        if (x1c == 1)
        {
            solve(b, x1, n);
        }
        else
        {
            solve(b, x2, n);
        }
    }
    return 0;
}