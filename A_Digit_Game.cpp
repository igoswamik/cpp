#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n, string s)
{
    if (n % 2 == 1)
    {
        bool isodd = false;
        for (int i = 0; i < n; i += 2)
        {
            int x = s[i] - '0';
            // cout << x << "=x ";
            if (x % 2 != 0)
            {
                isodd = true;
                break;
            }
        }
        if (isodd)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    else
    {
        bool iseven = false;
        for (int i = 1; i < n; i += 2)
        {
            int x = s[i] - '0';
            if (x % 2 == 0)
            {
                iseven = true;
                break;
            }
        }
        if (iseven)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
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
        string s;
        cin >> s;
        solve(n, s);
    }
    return 0;
}