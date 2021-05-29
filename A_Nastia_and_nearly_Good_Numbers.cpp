#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll a, ll b)
{
    if (b == 1)
    {
        cout << "NO" << endl;
        return;
    }
    ll x = 0, y = 0, z = 0, zz = 0;
    z = a * b;
    zz = 31 * z;
    x = a;

    while (1)
    {

        y = zz - x;
        if (y % a == 0 && y % z != 0)
        {
            break;
        }
        x += a;
    }
    cout << "YES" << endl;
    cout << x << " " << y << " " << zz << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}