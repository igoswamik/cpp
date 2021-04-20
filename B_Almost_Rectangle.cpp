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
        char arr[n][n];
        int x1 = -1, x2 = -1, y1, y2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '*')
                {
                    if (x1 == -1)
                    {
                        x1 = i;
                        y1 = j;
                    }
                    else
                    {
                        x2 = i;
                        y2 = j;
                    }
                }
            }
        }

        int x3, x4, y3, y4;

        if (y1 == y2)
        {
            x3 = x1;
            x4 = x2;
            if (y1 > 0)
                y3 = y4 = 0;
            else
                y3 = y4 = n - 1;
        }
        else if (x1 == x2)
        {
            y3 = y1;
            y4 = y2;
            if (x1 > 0)
                x3 = x4 = 0;
            else
                x3 = x4 = n - 1;
        }
        else
        {
            x3 = x2;
            y3 = y1;
            x4 = x1;
            y4 = y2;
        }
        arr[x3][y3] = '*';
        arr[x4][y4] = '*';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}