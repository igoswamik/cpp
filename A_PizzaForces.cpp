#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{

    // ll x = (n / 10) * 25;
    // ll x1 = n % 10;
    // if (x1 > 0)
    // {

    //     if (x1 <= 6)
    //     {
    //         x += 15;
    //     }
    //     else if (x1 <= 8)
    //     {
    //         x += 20;
    //     }
    //     else
    //     {
    //         x += 25;
    //     }
    // }

    // ll y = (n / 8) * 20;
    // ll y1 = n % 8;
    // if (y1 > 0)
    // {
    //     if (y1 <= 6)
    //         y += 15;
    //     else
    //         y += 20;
    // }

    // ll z = (n / 6) * 15;
    // ll z1 = n % 6;
    // if (z1 > 0)
    // {
    //     z += 15;
    // }
    // ll ans = min(x, min(y, z));
    // cout << ans << endl;
    ll res = -1;
    ll ans = ceil(1.0 * n * 2.5);
    ll x = ans % 15;
    res = ans - x;
    if (x > 0)
    {
        res += 15;
    }
    ll y = ans % 20;
    ll y1 = 0;
    if (y > 0)
    {
        y1 = y <= 15 ? 15 : 20;
    }
    res = min(res, ans - y + y1);
    ll z = ans % 20;
    ll z1 = 0;
    if (z > 0)
    {
        if (z <= 15)
            z1 = 15;
        else if (z <= 20)
            z1 = 20;
        else
            z1 = 25;
    }
    res = min(res, ans - z + z1);
    cout << res << endl;
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