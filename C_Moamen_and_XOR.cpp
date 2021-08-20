#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;
ll mod = 1e9 + 7;
void solve(ll n)
{
    ll k;
    cin >> k;
    // cout << "n=" << n << " k=" << k << endl;
    ll *eq = new ll[k + 1];
    ll *gt = new ll[k + 1];

    eq[0] = 1;
    gt[0] = 0;

    ll *dp = new ll[k + 1];
    dp[0] = 1;

    ll x = v[n - 1];

    vector<ll> v2;
    v2.push_back(0);

    ll pre = 1;
    for (int i = 1; i <= k; i++)
    {
        v2.push_back((pre % mod * v[n] % mod) % mod);
        pre = v2.back();
    }

    if (n % 2 == 1)
        x += 1;

    for (int i = 1; i <= k; i++)
    {
        eq[i] = (x % mod * eq[i - 1] % mod) % mod;
        gt[i] = n % 2 == 0 ? v[i - 1] : 0;
        dp[i] = (eq[i] % mod + gt[i] % mod) % mod;
    }

    cout << dp[k] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    v.clear();
    v.push_back(1);
    for (int i = 1; i <= 200000; i++)
    {
        ll x = (2 * v.back()) % mod;
        v.push_back(x);
    }
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