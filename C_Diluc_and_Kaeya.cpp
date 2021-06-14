#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    string s;
    cin >> s;
    vector<pair<int, int>> v(n, {0, 0});
    vector<int> ans(n);
    map<pair<int, int>, int> m;
    pair<int, int> p = {0, 0};
    if (s[0] == 'D')
    {
        p.first = 1;
    }
    else
    {
        p.second = 1;
    }
    ans[0] = 1;
    v[0] = p;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'D')
        {
            v[i].first = 1 + v[i - 1].first;
            v[i].second = v[i - 1].second;
        }
        else
        {
            v[i].first = v[i - 1].first;
            v[i].second = 1 + v[i - 1].second;
        }
        int x = v[i].first;
        int y = v[i].second;
        if (x == 0 || y == 0)
        {
            ans[i] = max(x, y);
        }
        else
        {
            //cout << x << " " << y << endl;
            int g = __gcd(x, y);
            x = x / g;
            y = y / g;
            m[make_pair(x, y)]++;
            ans[i] = m[make_pair(x, y)];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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