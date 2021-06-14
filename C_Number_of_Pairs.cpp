#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll l, r;
    cin >> l >> r;
    vector<ll> v;

    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        ll mi = l - v[i];
        ll ma = r - v[i];
        auto it1 = lower_bound(v.begin() + i + 1, v.end(), mi);
        auto it2 = lower_bound(v.begin() + i + 1, v.end(), ma + 1);
        it2--;
        count += max(it2 - it1 + 1, 0);
    }

    cout << count << endl;
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