#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    if (n == 1)
    {
        cout << v[0] << endl;
        return;
    }

    ll op = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (v[i] > v[i + 1])
            {
                op += v[i] - v[i + 1];
                v[i] = v[i + 1];
            }
        }
        else if (i == n - 1)
        {
            if (v[i] > v[i - 1])
            {
                op += v[i] - v[i - 1];
                v[i] = v[i - 1];
            }
        }
        else
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
            {
                op += v[i] - max(v[i + 1], v[i - 1]);
                v[i] = max(v[i + 1], v[i - 1]);
            }
        }
    }

    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            count += v[i];
        else if (i == n - 1)
            count += v[i];
        else
        {
            if (v[i] > v[i - 1])
                count += v[i] - v[i - 1];
            if (v[i] > v[i + 1])
                count += v[i] - v[i + 1];
        }
    }
    ll ans = count + op;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}