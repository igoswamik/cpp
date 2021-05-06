#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
        ll *u = new ll[n];
        ll *s = new ll[n];
        unordered_map<ll, vector<ll>> m;
        for (int i = 0; i < n; i++)
            cin >> u[i];
        for (int i = 0; i < n; i++)
            cin >> s[i];

        for (int i = 0; i < n; i++)
        {
            m[u[i]].push_back(s[i]);
        }

        ll *ans = new ll[n]();

        auto it = m.begin();
        while (it != m.end())
        {
            ll num = (it->first);
            //cout << "num=" << num << endl;
            ll x = m[num].size();
            vector<ll> v1 = m[num];
            sort(v1.begin(), v1.end(), greater<int>());
            for (int i = 1; i < x; i++)
            {
                //cout << v1[i] << "   ";
                v1[i] += v1[i - 1];
            }
            for (int k = 1; k <= x; k++)
            {
                ll rem = (x % k);
                ll pos = x - rem - 1;
                ans[k - 1] += v1[pos];
            }
            it++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}