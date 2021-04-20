#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n, ll l, ll r, ll s)
{
    multiset<ll> m;
    for (int i = 1; i <= n; i++)
    {
        m.insert(i);
    }

    int d = r - l;
    int arr[n];
    int sum = 0;
    for (int i = l - 1; i < r; i++)
    {
        int xx = d * (d + 1) / 2;
        int left = s - xx;
        auto lower = lower_bound(m.begin(), m.end(), left);
        if (lower == m.end())
        {
            lower--;
            arr[i] = (*lower);
            m.erase(lower);
        }
        else
        {
            arr[i] = (*lower);
            m.erase(lower);
        }
        d--;
        s -= arr[i];
    }

    if (s != 0)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < l - 1; i++)
    {
        arr[i] = *(m.begin());
        m.erase(m.begin());
    }
    for (int i = r; i < n; i++)
    {
        arr[i] = *(m.begin());
        m.erase(m.begin());
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

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
        ll n, l, r, s;
        cin >> n >> l >> r >> s;

        solve(n, l, r, s);
    }
    return 0;
}