#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll readq(ll g)
{
    ll r;
    cout << g << endl;
    cout.flush();
    cin >> r;
    return r;
}
void solve(ll n)
{
    ll k;
    cin >> k;
    ll sol = 0;

    ll r1 = readq((ll)0);
    if (r1 == 1)
    {
        sol = 0;
    }
    else
    {
        // ll pre = 0;
        for (ll x = 1; x < n; x++)
        {
            ll curr = (x - 1) ^ x;
            ll r = readq(curr);
            if (r == 1)
            {
                sol = curr;
                break;
            }
            // pre = curr ^ pre;
        }
    }

    cout << sol << endl;
    cout.flush();
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