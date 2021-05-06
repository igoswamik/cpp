#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll r, b, k;
        cin >> r >> b >> k;
        ll y = min(r, b);
        ll x = max(r, b);
        ll total = (x * (y - 1)) + x - 1;
        ll tt = (y * (x - 1)) + y - 1;
        if (k == total || k == tt)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}