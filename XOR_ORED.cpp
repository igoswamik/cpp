#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{

    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll X[32] = {0};
    ll res[32] = {0};
    for (int i = 0; i < 31; i++)
    {
        int o = 0, z = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] & (1 << i))
            {
                o++;
            }
            else
            {
                z++;
            }
        }
        if (o == n)
        {
            X[i] = 1;
            res[i] = 0;
        }
        else if (z == n)
        {
            X[i] = 0;
            res[i] = 0;
        }
        else
        {
            res[i] = 1;
            X[i] = 0;
        }
    }
    int xx = 0, ans = 0;
    for (int i = 0; i < 31; i++)
    {
        if (res[i] == 1)
        {
            ans += (1 << i);
        }
        if (X[i] == 1)
        {
            xx += (1 << i);
        }
    }
    cout << xx << " " << ans << endl;
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