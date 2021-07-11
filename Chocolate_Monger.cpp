#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll x;
    cin >> x;
    unordered_map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }
    ll ans = n - x < m.size() ? n - x : m.size();
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