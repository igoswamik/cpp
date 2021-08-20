#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll k;
    cin >> k;
    unordered_map<ll, ll> map;
    vector<ll> v, v2;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        v2.push_back(x);
    }

    sort(v2.begin(), v2.end());
    for (int i = 0; i < n - 1; i++)
    {
        map[v2[i]] = v2[i + 1];
    }

    ll count = 1;
    for (ll i = 0; i < n - 1; i++)
    {
        if (map.count(v[i]) == 0 || map[v[i]] != v[i + 1])
        {
            count++;
        }
    }

    if (k < count || k > n)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        // string str; //for reading empty line
        // getline(cin, str);
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}