#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll m, k;
    cin >> m >> k;
    ll ans = 0;
    if (n > 1)
    {
        for (int i = 1; i < n; i += 2)
        {
            ans ^= (i + 1 + k);
            ans ^= (i + 1 + m + k);
        }
    }
    if (n % 2 == 1)
    {
        for (int i = 1; i <= m; i++)
        {
            ans = ans ^ (n + i + k);
        }
    }
    cout << ans << endl;
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