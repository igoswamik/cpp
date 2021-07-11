#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> v;
    ll lr[n + 1], rl[n + 1], anslr[n + 1], ansrl[n + 1];
    ll a[k], t[k];

    for (int i = 0; i < k; i++)
        cin >> a[i];
    for (int i = 0; i < k; i++)
        cin >> t[i];
    for (int i = 0; i < k; i++)
        v.push_back(make_pair(a[i], t[i]));

    sort(v.begin(), v.end());

    ll val = INT_MAX;
    ll idx = 0;

    for (ll i = 0; i < k; i++)
    {
        ll d = v[i].first;
        while (idx < d)
        {
            lr[idx] = val;
            idx++;
        }
        val = min(val, n - v[i].first + v[i].second);
    }

    while (idx <= n)
    {
        lr[idx] = val;
        idx++;
    }

    int minus = 0;
    for (int i = n; i >= 1; i--)
    {
        lr[i] -= minus;
        minus++;
    }

    val = INT_MAX;
    idx = n;

    for (int i = k - 1; i >= 0; i--)
    {
        ll d = v[i].first;
        while (idx > d)
        {
            rl[idx] = val;
            idx--;
        }
        val = min(val, abs(v[i].first - 1) + v[i].second);
    }

    while (idx >= 1)
    {
        rl[idx] = val;
        idx--;
    }
    minus = 0;
    for (int i = 1; i <= n; i++)
    {
        rl[i] -= minus;
        minus++;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << min(rl[i], lr[i]) << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string str;
        getline(cin, str);

        solve();
    }
    return 0;
}