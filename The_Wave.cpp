#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll q;
    cin >> q;
    vector<ll> pos, neg;
    unordered_map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
        if (x < 0)
        {
            neg.push_back(-1 * x);
        }
        else
        {
            pos.push_back(x);
        }
    }
    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end());
    while (q--)
    {
        ll x;
        cin >> x;
        ll ncount = 0;
        if (m.count(x) > 0)
        {
            cout << "0" << endl;
        }
        else if (x >= 0)
        {
            auto it = lower_bound(pos.begin(), pos.end(), x);
            ncount = pos.end() - it;
            if (ncount % 2 == 0)
            {
                cout << "POSITIVE" << endl;
            }
            else
            {
                cout << "NEGATIVE" << endl;
            }
        }
        else
        {
            ncount = pos.size();
            auto it = lower_bound(neg.begin(), neg.end(), (-1 * x));
            int t = it - neg.begin();
            ncount += t;
            if (ncount % 2 == 0)
            {
                cout << "POSITIVE" << endl;
            }
            else
            {
                cout << "NEGATIVE" << endl;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    // cin >> t;
    // while (t--)
    // {
    ll n;
    cin >> n;
    solve(n);
    // }
    return 0;
}