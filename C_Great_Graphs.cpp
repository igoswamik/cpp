#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    vector<ll> v, v2;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    ll diff = 0;
    v2.push_back(0);
    for (int i = 1; i < n; i++)
    {
        diff = v[i] - v[i - 1];
        ans += diff;
        v2.push_back(diff);
    }

    for (int i = 1; i < v2.size(); i++)
    {
        ll r = v2.size() - i;
        ll l = i;
        ans -= ((l * r) * v2[i]);
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
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}