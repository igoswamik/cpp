#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll a)
{
    ll b;
    cin >> b;
    ll diff = abs(a - b);
    if (a == b)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }
    ll r1 = a % diff;
    ll ans = min(r1, diff - r1);
    cout << diff << " " << ans << endl;
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