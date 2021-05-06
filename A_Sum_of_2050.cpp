#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll num = 2050;
    if (n % num != 0)
    {
        cout << -1 << endl;
        return;
    }

    ll count = 0;
    n = n / 2050;
    while (n > 0)
    {
        ll x = n;
        ll minus = 1;
        while (x > 0)
        {
            x /= 10;
            minus *= 10;
        }
        if (minus > n)
        {
            minus /= 10;
        }
        ll t = n / minus;
        n = n - (t * minus);
        count += t;
    }

    if (n == 0)
    {
        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
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
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}