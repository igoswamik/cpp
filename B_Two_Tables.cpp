#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll W, H;
    cin >> W >> H;
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll w, h;
    cin >> w >> h;
    if (w > W - (x2 - x1) && h > H - (y2 - y1) || (h > H || w > W))
    {
        cout << -1 << endl;
        return;
    }
    ll tx = x1 - 0 + W - x2;
    ll ty = y1 - 0 + H - y2;
    ll xsp = max(x1 - 0, W - x2);
    ll ysp = max(y1 - 0, H - y2);
    double ans = 100000000000.0;
    if (xsp >= w || ysp >= h)
    {
        ans = 0;
    }
    else if (ty >= h)
    {
        ll dy = max(h - ysp, (ll)0);
        if (tx >= w)
        {
            ll dx = max(w - xsp, (ll)0);
            dy = min(dy, dx);
        }
        double a = (double)(dy * dy * 1.0);
        ans = a;
    }
    else if (tx >= w)
    {
        ll dx = max(w - xsp, (ll)0);
        double b = (double)(dx * dx * 1.0);
        ans = b;
    }
    else
    {
        ans = -1;
    }

    if (ans == -1)
    {
        cout << -1 << endl;
        return;
    }
    cout << fixed << setprecision(9) << sqrt(ans) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {

        solve();
    }
    return 0;
}