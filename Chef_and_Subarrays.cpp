#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll n)
{
    ll k;
    cin >> k;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        A[i] = x;
    }

    int count = 0;
    for (int j = 0; j < k; j++)
    {
        int total = 0;
        int mxfreq = 1;
        unordered_map<ll, ll> mp;
        for (int i = j; i < n; i += k)
        {
            total++;
            mp[A[i]]++;
            if (mp[A[i]] > mxfreq)
            {
                mxfreq = mp[A[i]];
            }
        }
        count += (total - mxfreq);
    }
    cout << count << endl;
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