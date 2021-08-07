#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll k;
    cin >> k;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> same;
    unordered_map<int, vector<int>> mp;
    for (int i = 0; i)
    // dp.push_back(make_pair(1, 0));

    // for (int i = 1; i < n; i++)
    // {
    //     int nl = 1, nk = 0;

    //     for (int j = i - 1; j >= 0; j--)
    //     {
    //         int cl = dp[j].first;
    //         int ck = dp[j].second;
    //         cl++;
    //         if (v[j] != v[i])
    //             ck++;

    //         if (ck <= k && cl > nl)
    //         {
    //             nl = cl;
    //             nk = ck;
    //         }
    //     }
    //     if (nl < dp[i - 1].first)
    //     {
    //         nl = dp[i - 1].first;
    //         nk = dp[i - 1].second;
    //     }
    //     dp.push_back(make_pair(nl, nk));
    // }

    // cout << dp[n - 1].first << endl;
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