#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{

    ll k;
    cin >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= k)
        {
            sum += v[i];
        }
        else
        {
            if (i < n - 1)
            {
                int diff = v[i] - k;
                v[i] -= diff;
                v[i + 1] -= diff;
                sum += k;
            }
            else
            {
                sum += v[i];
            }
        }
    }

    cout << sum << endl;
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