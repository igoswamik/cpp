#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll a, b;
    cin >> a >> b;
    if (a == 1)
    {
        if ((n - 1) % b == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        return;
    }
    ll x = 1;
    while (x <= n)
    {
        ll y = n - x;
        if (y % b == 0)
        {
            cout << "Yes" << endl;
            return;
        }
        x = x * a;
    }
    cout << "No" << endl;
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