#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll count = 0;
    unordered_map<ll, ll> m;
    for (int i = 1; i <= n; i++)
    {

        ll x;
        cin >> x;
        m[x - i]++;
    }
    for (auto i : m)
    {
        ll xx = i.second;
        count += (xx * (xx - 1)) / 2;
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
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}