#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    vector<ll> v1, v2;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v2.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (v1[i] == v2[i])
        {
            continue;
        }
        else
        {
            ll extra = abs(v2[i] - v1[i]);
            if (v1[i] > v2[i])
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (v1[j] < v2[j])
                    {
                        ll ex = abs(v2[j] - v1[j]);
                        ll dec = min(ex, extra);
                        for (int k = 0; k < dec; k++)
                        {
                            v.push_back(make_pair(i, j));
                        }
                        v1[j] += dec;
                        extra -= dec;
                    }
                }
                if (extra > 0)
                {
                    cout << -1 << endl;
                    return;
                }
            }
            else
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (v1[j] > v2[j])
                    {
                        ll ex = abs(v2[j] - v1[j]);
                        ll dec = min(ex, extra);
                        for (int k = 0; k < dec; k++)
                        {
                            v.push_back(make_pair(j, i));
                        }
                        v1[j] -= dec;
                        extra -= dec;
                    }
                }
                if (extra > 0)
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first + 1 << " " << v[i].second + 1 << endl;
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