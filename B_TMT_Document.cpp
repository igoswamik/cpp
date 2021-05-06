#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n, string s)
{
    int mc = 0;
    int tc = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'M')
        {
            if (tc < 1)
            {
                cout << "NO" << endl;
                return;
            }
            tc--;
            mc++;
        }
        else
        {
            tc++;
        }
    }

    if (mc != (n / 3))
    {
        cout << "NO" << endl;
        return;
    }
    tc = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'M')
        {
            if (tc < 1)
            {
                cout << "NO" << endl;
                return;
            }
            tc--;
        }
        else
        {
            tc++;
        }
    }

    cout << "YES" << endl;
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