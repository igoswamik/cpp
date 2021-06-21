#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll x, t;
    cin >> x >> t;
    ll a = t / x;
    ll f1 = max((ll)0, n - a);
    ll f = (f1)*a;
    ll l = min(a - 1, n - 1);
    ll ans = (l * (l + 1)) / 2;
    ans += f;
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