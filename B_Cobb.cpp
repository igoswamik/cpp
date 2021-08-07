#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll k;
bool comp(pair<ll, ll> p1, pair<ll, ll> p2)
{
    ll x = p1.first - k * p1.second;
    ll y = p2.first - k * p2.second;
    return x > y;
}
void solve(ll n)
{
    cin >> k;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(make_pair(i + 1, x));
    }

    sort(v.begin(), v.end(), comp);

    ll ans = INT_MIN;
    for (int i = 0; i < min((ll)100, n - 1); i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ll curr = (v[i].first) * (v[j].first) - k * (v[i].second | v[j].second);
            if (curr > ans)
            {
                ans = curr;
            }
        }
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
        // string str; //for reading empty line
        // getline(cin, str);
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}