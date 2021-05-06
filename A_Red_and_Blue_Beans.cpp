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
        ll r, b, d;
        cin >> r >> b >> d;
        ll mxp = min(r, b);
        ll x = max(r, b);
        ll y = x / mxp;
        if (x % mxp != 0)
        {
            y += 1;
        }
        if (x - mxp > d && y - 1 > d)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}