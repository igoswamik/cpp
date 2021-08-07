#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll m;
    cin >> m;
    vector<ll> v1, v2;
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        v2.push_back(x);
    }
    for (int i = 1; i < m; i++)
    {
        v1[i] += v1[i - 1];
    }
    for (int i = m - 2; i >= 0; i--)
    {
        v2[i] += v2[i + 1];
    }
    ll s1 = v1[m - 1], s2 = v2[0];
    ll ans = INT_MAX;

    for (int i = 0; i < m; i++)
    {
        ll x = max(s1 - v1[i], s2 - v2[i]);
        ans = min(ans, x);
    }
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

        solve();
    }
    return 0;
}