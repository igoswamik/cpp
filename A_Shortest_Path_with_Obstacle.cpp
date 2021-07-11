#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll xa, ya, xb, yb, xf, yf;
    cin >> xa >> ya >> xb >> yb >> xf >> yf;
    ll dist = abs(xb - xa) + abs(ya - yb);

    if ((xa == xb && xa == xf) && yf > min(ya, yb) && yf < max(ya, yb))
    {
        dist += 2;
    }
    else if ((ya == yb && ya == yf) && xf > min(xa, xb) && xf < max(xa, xb))
    {
        dist += 2;
    }
    cout << dist << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string str;
        getline(cin, str);

        solve();
    }
    return 0;
}