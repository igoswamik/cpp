#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    unordered_map<ll, ll> m;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
        v.push_back(x);
    }

    for (int i = 1; i < v.size(); i++)
    {
        if (i >= 300)
        {
            cout << "NO" << endl;
            return;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            ll x = abs(v[i] - v[j]);
            if (m.count(x) == 0)
            {
                v.push_back(x);
                m[x]++;
            }
        }
    }
    cout << "YES" << endl;
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
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
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}