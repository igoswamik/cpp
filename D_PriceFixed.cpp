#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool comp(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.second < p2.second;
}

void solve(ll n)
{
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end(), comp);
    ll i = 0, j = n - 1;
    ll ex = 0, reb = 0;
    while (i < j)
    {
        if (v[j].second <= ex || v[j].first == 0)
        {
            ex += v[j].first;
            reb += v[j].first;
            j--;
        }
        else if (v[i].second <= ex)
        {
            ex += v[i].first;
            reb += v[i].first;
            i++;
        }
        else
        {
            ll req = max(v[i].second - ex, (ll)0);
            ll p = min(req, v[j].first);
            ex += p;
            reb += (2 * p);
            v[j].first -= p;
        }
    }

    if (v[i].second <= ex)
    {
        ex += v[i].first;
        reb += v[i].first;
    }
    else
    {
        ll req = max(v[i].second - ex, (ll)0);
        ll p = min(req, v[j].first);
        ex += p;
        reb += 2 * (p);
        v[i].first -= p;
        if (v[i].first > 0)
        {
            reb += v[i].first;
            ex += v[i].first;
        }
    }
    cout << reb << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    solve(n);

    return 0;
}