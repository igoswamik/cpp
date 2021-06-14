#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll power(ll x, ll n)
{
    if (n == 0)
        return 1;

    return (2 * power(x, n - 1)) % 1000000007;
}
void solve(ll n)
{
    vector<ll> v1;
    unordered_map<ll, ll> mv;
    unordered_map<ll, ll> vis;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mv[v1[i]] = x;
    }

    ll count = 0;
    for (int i = 0; i < n; i++)
    {

        if (vis.count(v1[i]) == 0)
        {
            int x = v1[i];
            while (vis.count(x) == 0)
            {
                vis[x]++;
                x = mv[x];
            }
            count++;
        }
    }

    ll ans = power(2, count);
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