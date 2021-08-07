#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll cost = 0;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        vector<ll> v;
        vector<ll> v2;
        ll lastbreak = 0;
        for (ll i = 0; i < k; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
            if (i > 0 && v[i] < v[i - 1])
            {
                ll l = i - lastbreak;
                ll r = k - i;
                v2.push_back(l);
                lastbreak = i;
                pq.push(l);
            }
        }
        pq.push(k - lastbreak);
        v2.push_back(k - lastbreak);
        ll l = 0, r = v2.size() - 1;
        while (l < r)
        {
            if (v2[l] <= v2[r])
            {
                cost += v2[l];
                l++;
            }
            else
            {
                cost += v2[r];
                r--;
            }
        }
    }

    while (pq.size() > 1)
    {
        ll c1 = pq.top();
        pq.pop();
        ll c2 = pq.top();
        pq.pop();
        ll newl = c1 + c2;
        cost += newl;
        pq.push(newl);
    }
    cout << cost << endl;
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